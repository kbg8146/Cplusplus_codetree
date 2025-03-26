#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int len = str.length();

    for(int i=0;i<len;i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=toupper(str[i]);
            cout << str[i];
        }
        else if(str[i]>='A' && str[i]<='Z'){
            str[i]=tolower(str[i]);
            cout << str[i];
        }
    }
    // Please write your code here.
    return 0;
}