#include <iostream>
using namespace std;

int cnt=0;

int Fibo(int n){

    if(n<=2){
        return 1;
    }

    return Fibo(n-1) + Fibo(n-2);
}

int main() {
    int N;
    cin >> N;

    cout << Fibo(N);
    // Please write your code here.
    return 0;
}