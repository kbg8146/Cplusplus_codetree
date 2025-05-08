#include <iostream>
#include <string>
using namespace std;

int main() {
    int A=0;
    int B=0;
    string N="";
    cin >> A >> B >> N;

    int num = 0;
    for(int i=0;i<N.length();i++){
        num = num*A + (N[i]-'0');
    }

    int ans[100]={};
    int cnt=0;
    while(true){
        
        if(num<B){
            ans[cnt++]=num;
            break;
        }
        
        ans[cnt++]=num%B;

        num=num/B;
    }

    for(int i = cnt-1;i>=0;i--){

        cout << ans[i];
    }

    // Please write your code here.
    return 0;
}