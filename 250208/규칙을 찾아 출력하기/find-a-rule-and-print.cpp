#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        if(i==0){
            for(int j=0;j<n;j++){
                cout << "* ";
            }
            cout << endl;
            continue;
        }
        for(int j=0;j<n;j++){
            if(j<i||j+1==n){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;

    }
    return 0;
}