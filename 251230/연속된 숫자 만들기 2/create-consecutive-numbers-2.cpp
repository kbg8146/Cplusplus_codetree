#include <iostream>
using namespace std;

int a, b, c;
int x[3];
int main() {
    cin >> x[0] >> x[1] >> x[2];
    sort(x,x+3);
    a=x[0];b=x[1];c=x[2];
    //cout << a << " " << b << " " << c << endl;
    if(a+1==b && b+1==c) cout << 0;
    else if((a+2 == b && b+2 <= c)||(a+2 <= b && b+2 == c)) cout << 1;
    else cout << 2;
    // Please write your code here.
    return 0;
}