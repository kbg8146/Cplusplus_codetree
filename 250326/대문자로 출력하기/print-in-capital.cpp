#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {

    string str;
    string str2;
    cin >> str;
    for(int i=0;i<str.length();i++){
        if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z')){
            cout << (char)toupper(str[i]);
        }
    }

    // Please write your code here.
    return 0;
}