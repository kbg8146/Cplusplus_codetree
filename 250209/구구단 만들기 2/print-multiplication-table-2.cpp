#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a ,b;
    cin >> a >> b;
    for(int i=1;i<=4;i++){
        for(int j=0;j<b-a+1;j++){
            cout << b-j << " * " << 2*i << " = " << (b-j)*(2*i);
            if(j<b-a){
                cout << " / ";
            }
        }
        cout << endl;
    }
    return 0;
}