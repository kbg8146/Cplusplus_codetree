#include <iostream>
#include <string>
using namespace std;

int main() {
    int n=4;
    string arr[4];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=n-1;i>=0;i--){
        cout << arr[i] << endl;
    }
    // Please write your code here.
    return 0;
}