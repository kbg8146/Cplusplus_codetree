#include <iostream>
using namespace std;

bool IsMagicNumber(int n){
    int second, first = 0;
    int result=0;
    second = n/10;
    first = n-second*10;
    result = second+first;

    return n%2==0 && result%5==0;
}

int main() {
    int num =0;
    cin >> num;

    if(IsMagicNumber(num)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    // Please write your code here.
    return 0;
}