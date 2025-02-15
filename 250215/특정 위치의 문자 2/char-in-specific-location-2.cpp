#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char arr[10];

    for(int i=1;i<=10;i++){
        cin >> arr[i];
        if(i==2||i==5||i==8){
            cout << arr[i] << " ";
        }
    }

    return 0;
}