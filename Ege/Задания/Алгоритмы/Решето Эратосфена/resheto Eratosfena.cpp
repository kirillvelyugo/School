#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    cin >> size;
    vector <bool> nums(size + 1, 1);

    for (int i = 2; i * i <= size; i++) {
        if (nums[i]) {
            for (int j = i * i; j <= size; j += i) {
                nums[j] = 0;
            }
        }
    }

    for (int i = 2; i < nums.size(); i++) {
        if (nums[i]) {
            cout << i << ' ';
        }
    }

    return 0;
}
