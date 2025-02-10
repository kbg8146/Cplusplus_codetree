#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char arr[9];
    for(int i=0;i<=9;i++){
        cin >> arr[i];
    }
    for(int i=9;i>=0;i--){
        cout << arr[i];
    }
    return 0;
}