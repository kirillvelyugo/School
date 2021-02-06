#include <iostream>
#include <algorithm>
using namespace std;

pair <int,int> data[1000];
int n;

int udal(int k){
    int count = 1;
    
    for (int i = 0; i < n; i++){
        if (k == data[i].second){
            count += udal(data[i].first);
        }
    }
    
    return count;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> data[i].first >> data[i].second;
    }
    int k;
    cin >> k;
    
    cout << udal(k) << '\n';

    return 0;
}