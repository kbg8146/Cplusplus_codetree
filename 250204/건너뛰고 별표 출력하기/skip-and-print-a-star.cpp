#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i = 0; i<n; i++){
        for(int j= 0; j<=i; j++){
            cout << "*";
        }
        cout << endl << endl;
    }
    for(int i = 0; i<n-1; i++){
        for(int j= n-1; j>i; j--){
            cout << "*";
        }
        cout << endl << endl;
    }
    return 0;
}