#include <iostream>
using namespace std;

int a,b,c;
int mode;

int main() {
    cin >> a >> b >> c;
    int cnt=0;

    if(a>b) swap(a,b);
    if(a>c) swap(a,c);
    if(b>c) swap(b,c);

    if(abs(a-b)>=abs(b-c)){
        a = c-1;
        mode = 1;
    }
    else{
        c = a+1;
        mode = 0;
    }
    cnt++;
    while(1){
        
        if(a>b) swap(a,b);
        if(a>c) swap(a,c);
        if(b>c) swap(b,c);

        if(a+1 == b && b+1 == c) break;
        if(mode==0){
            a = c-1;
            mode=1;
        }
        else if(mode == 1){
            c = a+1;
            mode=0;
        }
        cnt++;
        //cout << a << " " << b << " " << c;
    }
    cout << cnt;

    // Please write your code here.
    return 0;
}