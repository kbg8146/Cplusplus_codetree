#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    char alp = s[1];
    for(int i=0;i<s.length();i++){
        if(s[i]==alp){
            s[i]=s[0];
        }
    }
    cout << s;
    // Please write your code here.
    return 0;
}