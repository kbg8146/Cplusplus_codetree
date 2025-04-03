#include <iostream>
#include <string>
using namespace std;

int main() {

    string A, B;
    cin >> A >> B;
    int len = A.length();
    
    for(int i=1;i<=len;++i){

        string rotated =A.substr(len-i)+A.substr(0,len-i);
        if(rotated==B){
            cout << i << endl;
            return 0;
        }
    }
    
    cout << -1 << endl;
    // Please write your code here.
    return 0;
}