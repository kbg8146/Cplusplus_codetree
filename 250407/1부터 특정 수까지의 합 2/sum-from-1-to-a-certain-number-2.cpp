#include <iostream>
using namespace std;

int Sum(int n){
    if(n==1)
        return 1;
    
    return Sum(n-1)+n;
}

int main() {
    int num=0;
    cin >> num;

    cout << Sum(num);
    // Please write your code here.
    return 0;
}