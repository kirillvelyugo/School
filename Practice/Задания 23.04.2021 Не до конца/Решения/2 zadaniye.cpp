#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    map <int, string> dataWinners;
    
    int maxSum = 0;
    
    for (int i = 0; i < n; i++){
        string surname, name, member = "";
        int x1, x2, x3, sum = 0;
        
        cin >> surname >> name >> x1 >> x2 >> x3;
        
        member = surname + ' ' + name;
        sum = x1 + x2 + x3;
        
        if (maxSum < sum){
            maxSum = sum;
        }
        
        if (dataWinners.count(sum) == 1){
            dataWinners[sum] += "\n" + member;
        }else{
            dataWinners[sum] = member;
        }
    }
    
    cout << dataWinners[maxSum] << endl;
    
    return 0;
}