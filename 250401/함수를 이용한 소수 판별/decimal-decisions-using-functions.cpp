#include <iostream>
using namespace std;

bool IsPrime(int n){
    if(n==1)
        return false;
    for(int i=2;i<n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}

int main() {
    int A, B;
    cin >> A >> B;
    int sum=0;

    for(int i=A;i<=B;i++){
        if(IsPrime(i))
            sum+=i;
    }
    cout << sum;
    // Please write your code here.
    return 0;
}