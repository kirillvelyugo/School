#include <iostream>
#include <map>
using namespace std;

int main()
{
    pair <int, int> min_count {5001, 0};
    map <int, pair <int, int> > stat{ {15, min_count}, {20, min_count}, {25, min_count} };
    int n;
    cin >> n;

    int minFirst = 5001, minSecond = 5001, minThird = 5001;
    for (int i = 1; i <= n; i++) {
        string s;
        int type, cost;
        cin >> s >> s >> type >> cost;

        if (stat[type].first > cost) {
            stat[type].first = cost;
            stat[type].second = 1;
        }
        else if (stat[type].first == cost){
            stat[type].second++;
        }
    }

    cout << stat[15].second << ' ' << stat[20].second << ' ' << stat[25].second << endl;

    return 0;
}
