#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int cnt=1;
    int arr[10][10]={};

    for(int j=n;j>0;j--){
        for(int i=n;i>0;i--){
            arr[i][j]=cnt;
            cnt++;
        }            
        j--;
        for(int i=1;i<=n;i++){
            arr[i][j]=cnt;
            cnt++;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


