#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int len = s.length();

    for(int i=0;i<len;i++){
        if(s[i]=='e'){
            s.erase(i,1);
            break;
        }
    }
    cout << s;
    // Please write your code here.
    return 0;
}