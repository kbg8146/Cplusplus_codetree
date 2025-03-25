#include <iostream>
using namespace std;

bool IsMagicNumber(int n){
    int second, first = 0;
    second = n/10;
    first = n-second;
    return second+first;
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