#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int cnt = 0;
    while(true){
        if(n>=1000){
            cout << cnt;
            break;
        }
        if(n%2==0){
            n=3*n+1;
            cnt++;
        }else if(n%2!=0){
            n=2*n+2;
            cnt++;
        }
    }
    return 0;
}