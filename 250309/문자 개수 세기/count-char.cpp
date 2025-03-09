#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin,str);

    int cnt=0;
    char alp;
    cin >> alp;
    
    for(int i=0;i<str.length();i++){
        if(alp==str[i]){
            cnt++;
        }        
    }
    cout << cnt;

    // Please write your code here.
    return 0;
}