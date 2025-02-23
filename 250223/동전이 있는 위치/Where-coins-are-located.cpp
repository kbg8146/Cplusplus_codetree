#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n ,m;
    cin >> n >> m;
    int arr[10][10]={0,};
    int a, b;
    for(int i=0;i<m;i++){
        cin >> a >> b;
        arr[a][b]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(arr[i][j]!=1){
                arr[i][j]=0;
            }
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }
    return 0;
}