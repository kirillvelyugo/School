#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int max = 0, X;
    for (int i = 90; i <= 130; i++){
        string s(i, '1');
        
        while (s.find("111") != string::npos){
            if (s.find("111") != string::npos){
                int p = s.find("111");
                s.replace (p, 3, "2");
            }
                
            if (s.find("2222") != string::npos){
                int p = s.find("2222");
                s.replace (p, 4, "333");
            }
            
            if (s.find("33") != string::npos){
                int p = s.find("33");
                s.replace (p, 2, "1");
            }
        }
        
        int count_1 = 0;
        for (int j = 0; j < s.size(); j++){
            if (s[j] == '1') {
                count_1++;
            }
        } 
        
        if (max < count_1){
            max = count_1;
            X = i;
        }

    }
    
    cout << X << endl;
    return 0;
}
