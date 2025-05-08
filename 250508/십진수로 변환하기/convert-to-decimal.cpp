#include <iostream>
using namespace std;

int main() {
    for(int i=0;i<8;i++){
        cin >> binary[i];
    }
    int num = 0;

    for(int i=0;i<5;i++)
        num = num*2+binary[i];

    cout << num;
    // Please write your code here.
    return 0;
}