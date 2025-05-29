#include <iostream>
using namespace std;

int main() {
    int N;
    int a,b,c;
    cin >> N;
    cin >> a >> b >> c;
    int Acnt=0,Bcnt=0,Ccnt=0;
    for(int i=a-2;i<=a+2;i++){
        if(1<=i && i<=N)
            Acnt++;
    }
    for(int i=b-2;i<=b+2;i++){
        if(1<=i && i<=N)
            Bcnt++;
    }
    for(int i=c-2;i<=c+2;i++){
        if(1<=i && i<=N)
            Ccnt++;
    }
    int ans = Acnt*N*N+N*Bcnt*N+N*N*Ccnt-Acnt*Bcnt*N-N*Bcnt*Ccnt-Acnt*N*Ccnt+Acnt*Bcnt*Ccnt;
    cout << ans;
    // Please write your code here.
    return 0;
}