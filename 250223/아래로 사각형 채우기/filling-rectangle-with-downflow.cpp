#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[10][10]={};
    int cnt = 1;
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            arr[i][j]=cnt;
            cnt++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}