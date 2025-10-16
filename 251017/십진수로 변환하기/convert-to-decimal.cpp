#include <iostream>
using namespace std;

int main() {
    string binary;
    cin >> binary;

    int num=0;
    for(int i=0;i<(int) binary.size();i++){
        num = num * 2 + (binary[i]-'0');
    }
    cout << num;
    // Please write your code here.
    return 0;
}