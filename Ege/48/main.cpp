#include <iostream>
#include <vector>
using namespace std;

void resheto (vector <bool>& nums){
    for (int i = 2; i * i <= 2484370; i++){
        if(nums[i]){
            for (int j = i * i; j <= 2484370; j += i){
                nums[j] = 0;
            }
        }
    }
}

int main()
{
    vector <bool> nums(2484371, 1);
    int order = 1;

    resheto(nums);
    for (int i = 2484292; i <= 2484370; i++){
        if (nums[i]){
            cout << order << ' ' << i << endl;
            order++;
        }
    }

    return 0;
}
