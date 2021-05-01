#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <bool> nums(3577001, 1);
    int count = 0;
    
    for (int i = 2; i * i <= 3577000; i++){
        if(nums[i]){
            for (int j = i * i; j <= 3577000; j += i){
                nums[j] = 0;
            }
        }
    }
    
    for (int i = 2; i < nums.size(); i++){
        if (nums[i]){
            count++;
        }
    }
    cout << count;
    return 0;
}