#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<(n-(i+1));j++){
            cout << " ";
        }
        for(int k=0;k<i+1;k++){
            cout << "* ";
        }        
        for(int j=0;j<(n-(i+1));j++){
            cout << " ";
        }
        cout << endl;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int k=0;k<n-i;k++){
            cout << "* ";
        }        
        for(int j=0;j<i;j++){
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}