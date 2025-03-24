#include <iostream>
using namespace std;

int main() {

    char a;
    cin >> a;
    int A = (char)a;
    A=A-1;
    if(A<97){
        A=122;
    }
    cout << (char)A;
    // Please write your code here.
    return 0;
}