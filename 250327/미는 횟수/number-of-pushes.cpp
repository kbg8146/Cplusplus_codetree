#include <iostream>
#include <string>
using namespace std;

int main() {

    string A, B;
    cin >> A >> B;
    int len = A.length();
    int cnt=0;
    int small=0;
    if(A==B){
        cout << 1;
        return 0;
    }
    for(int i=0;i<len;i++){
        if(A[i]==B[i]){
            continue;
        }        
        A=A.substr(1)+A.substr(0,1);
        cnt++;
        i = 0;
        if(cnt==len){
            cnt =0;
            break;
        }
    }
    if(cnt==0){
        cout << -1;
    }
    else{
        cout << cnt;
    }
    // Please write your code here.
    return 0;
}