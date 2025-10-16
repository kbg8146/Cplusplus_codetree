#include <iostream>
using namespace std;

int main() {
    int A=0;
    int B=0;
    string N;
    int x[100]={};
    
    cin >> A >> B;
    cin >> N;

    int num=0;
    for(int i=0;i<(int)N.size();i++){
        num=num*A+(N[i]-'0');
    }

    int j=0;
    while(true){
        if(num<B){
            x[j++]=num;
            break;
        }

        x[j++]=num%B;
        num=num/B;
    }

    for(int k=j-1;k>=0;k--){
        cout << x[k];
    }
    // Please write your code here.
    return 0;
}