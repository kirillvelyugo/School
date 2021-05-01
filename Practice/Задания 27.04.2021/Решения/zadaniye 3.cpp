#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool check (vector <char> digits){
    for (int i = 0; i < digits.size(); i++){
        if (digits[i] != '0'){
            return false;
        }
    }
    return true;
}

int main (){
    setlocale(LC_ALL, "RUS");
    vector <char> digits;
    string s;
    getline(cin, s);
    
    for (int i = 0; i < s.size(); i++){
        if (s[i] >= '0' && s[i] <= '9'){
            digits.push_back(s[i]);    
        }
        if (s[i] == '.'){
            break;
        }
    }
    
    sort(digits.begin(), digits.end());
    
    if (digits.size() >= 1){
        cout << "Да" << endl;
        if (check(digits)){
            cout << '0';
            return 0;
        }
        for (int i = digits.size() - 1; i >= 0; i--){
            cout << digits[i];
        }
    }else{
        cout << "Нет" << endl;
    }
}