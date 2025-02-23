#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N,M;
    cin >> N >> M;
    int arr[10][10]={0};
    int a,b;
    for(int i=0;i<M;i++){
        cin >> a >> b;
        arr[a][b]=a*b;
    }
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}