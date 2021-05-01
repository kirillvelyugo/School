#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main (){
    int n;
    vector <string> orderSurnames;
    map <string, pair<int, int>> dataSurnames;
    
    cin >> n;
    for (int i = 0; i < n; i++){
        string name, surname;
        
        cin >> surname >> name;
        orderSurnames.push_back(surname);
        
        if (dataSurnames.count(surname)){
            dataSurnames[surname].first++;
        }else{
            dataSurnames[surname] = {1, 1};
        }
    }
    
    for (int i = 0; i < orderSurnames.size() ; i++){
        if (dataSurnames[orderSurnames[i]].first == 1){
            cout << orderSurnames[i] << endl;
        }else{
            if(dataSurnames[orderSurnames[i]].second == 1){
                cout << orderSurnames[i] << endl;
                dataSurnames[orderSurnames[i]].second++;
            }else{
                cout << orderSurnames[i] << dataSurnames[orderSurnames[i]].second << endl;
                dataSurnames[orderSurnames[i]].second++;
            }
        }
    }
    
    return 0;
}