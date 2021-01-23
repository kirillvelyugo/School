#include <iostream>

using namespace std;

int main(){
    int a, prev, next;
    cin >> a;
    
    prev = a - 1;
    next = a + 1;
    
    cout << "The next number for the number " << a << " is " << next << '.' << '\n';
    cout << "The previous number for the number " << a << " is " << prev << '.' << '\n';
    return 0;
}
