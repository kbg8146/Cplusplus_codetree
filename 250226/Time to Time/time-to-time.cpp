#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int A,B,C,D;
    cin >> A >> B >> C >> D;
    int cnt=0;
    while(true){
        if(C==A && D==B){
            break;
        }

        B++;
        cnt++;
        if(B==60){
            A++;
            B=0;
        }
    }
    cout << cnt;
    return 0;
}