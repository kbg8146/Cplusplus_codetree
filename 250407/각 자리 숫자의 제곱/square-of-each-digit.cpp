#include <iostream>
using namespace std;

int F(int n){
    if(n<10)
        return n;

    return F(n/10) + (n%10);
}

int main() {
    cout << F(1527);
    // Please write your code here.
    return 0;
}