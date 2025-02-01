#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int add=0;

    for(int i=1;i<=100;i++){
        add+=i;
        if(add>n){
            cout << i;
            break;
        }
    }
    return 0;
}