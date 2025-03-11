#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[5] = {"apple", "banana", "grape", "blueberry","orange"};
    char A;
    int cnt=0;
    cin >> A;

    for(int i=0;i<5;i++){
        for(int j=2;j<=3;j++){
            if(arr[i][j]==A){
                cout << arr[i] << endl;
                cnt++;
                break;
            }            
        }

    }
    cout << cnt;
    // Please write your code here.
    return 0;
}