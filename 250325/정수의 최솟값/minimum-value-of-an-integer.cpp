#include <iostream>
using namespace std;
int Comp(int a, int b, int c){
    int num;
    if(a>b){
        if(b>c){
            return c;
        }
        return b;
    }
    else{
        if(a>c){
            return c;
        }
        return a;
    }
}
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << Comp(a,b,c);
    // Please write your code here.
    return 0;
}