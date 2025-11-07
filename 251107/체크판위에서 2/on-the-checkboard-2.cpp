#include <iostream>
#include <climits>
using namespace std;

char arr[20][20];

int main() {
    int R, C;
    cin >> R >> C;

    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin >> arr[i][j];
        }
    }

    int cnt=0;
    for(int i=1;i<R;i++){
        for(int j=1;j<C;j++){
            for(int k=i+1;k<R-1;k++){
                for(int l=j+1;l<C-1;l++){
                    if(arr[0][0] != arr[i][j] &&
                    arr[i][j] != arr[k][l] &&
                    arr[k][l] != arr[R-1][C-1]){
                        cnt++;
                    }
                }
            }
        }
    }
    cout << cnt;

    // Please write your code here.
    return 0;
}