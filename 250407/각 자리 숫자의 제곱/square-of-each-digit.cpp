#include <iostream>
using namespace std;

int F(int n){
    if(n<10)
        return n*n;

    return F(n/10) + (n%10)*(n%10);
}

int main() {
    int N;
    cin >> N;
    cout << F(N);
    // Please write your code here.
    return 0;
}