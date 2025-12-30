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
    if(a+1 == b && b+1 == c){
        cout << 0;
        return 0;
    }
    if(abs(a-b)>=abs(b-c)&&abs(b-c)>=2){
        a = b+2;
        mode = 1;
    }
    else if(abs(a-b)<abs(b-c)&&abs(b-a)>=2){
        c = b-2;
        mode = 0;
    }
    cnt++;
    while(1){
        
        if(a>b) swap(a,b);
        if(a>c) swap(a,c);
        if(b>c) swap(b,c);

        if(a+1 == b && b+1 == c) break;
        if(mode==0){
            a = b+2;
            mode=1;
        }
        else if(mode == 1){
            c = b-1;
            mode=0;
        }
        cnt++;
        //cout << a << " " << b << " " << c;
    }
    cout << cnt;

    // Please write your code here.
    return 0;
}