#include <iostream>
#include <vector>

using namespace std;

vector<string> a;

int Sergey(int x, int y) {
    int count = 1;

    a[x][y] = '*';

    if (a[x][y + 1] == '.') {
        count += Sergey(x, y + 1);
    }
    if (a[x][y - 1] == '.') {
        count += Sergey(x, y - 1);
    }
    if (a[x + 1][y] == '.') {
        count += Sergey(x + 1, y);
    }
    if (a[x - 1][y] == '.') {
        count += Sergey(x - 1, y);
    }

    return count;
}

int main()
{
    int n, x, y;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        a.push_back(s);
    }

    cin >> x >> y;
    cout << Sergey(x - 1, y - 1) << endl;
}
