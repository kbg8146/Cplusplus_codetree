#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;
    string str2;
    string str3;

    cin >> str1 >> str2 >> str3;

    int len1=str1.length();
    int len2=str2.length();
    int len3=str3.length();

    int sublen12=abs(len1-len2);
    int sublen13=abs(len1-len3);
    int sublen23=abs(len2-len3);

    if(sublen12>=sublen13){
        if(sublen12>=sublen23){
            cout << sublen12;
        }
        else{
            cout << sublen23;
        }
    }
    else{
        if(sublen13>=sublen23){
            cout << sublen13;
        }
        else{
            cout << sublen23;
        }
    }
    // Please write your code here.
    return 0;
}