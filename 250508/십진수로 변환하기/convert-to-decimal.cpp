#include <iostream>
#include <string>
using namespace std;

int main() {
    string bin;
    cin >> bin;

    int num = 0;
    for(int i=0;i<bin.length();i++){
        num = num*2 + (bin[i]-'0');
    }
    cout << num;
    // Please write your code here.
    return 0;
}