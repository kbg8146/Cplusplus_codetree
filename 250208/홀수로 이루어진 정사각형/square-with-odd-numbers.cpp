#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int num=11;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            cout << num << " ";
            num+=2;
        }
        cout << endl;
        num-=2*(n-1);
    }
    return 0;
}