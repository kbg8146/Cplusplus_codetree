#include <iostream>
using namespace std;

void compare(int &a,int &b){
    if(a<b){
        a=a+10;
        b=b*2;
    }
    else{
        b=b+10;
        a=a*2;
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    compare(a,b);
    cout << a << " " << b;
    // Please write your code here.
    return 0;
}