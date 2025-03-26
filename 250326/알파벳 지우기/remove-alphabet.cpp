#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 , str2;
    cin >> str1 >> str2;


    for(int i=0;i<str1[i];i++){
        if((str1[i]>='a' && str1[i]<='z')||(str1[i]>='A' && str1[i]<='Z')){
            str1.erase(i,1);
            i-=1;
        }

    }
    for(int i=0;str2[i];i++){
        if((str2[i]>='a' && str2[i]<='z')||(str2[i]>='A' && str2[i]<='Z')){
            str2.erase(i,1);
            i-=1;
        }

    }
    cout << stoi(str1)+stoi(str2);
    // Please write your code here.
    return 0;
}