#include <iostream>

#define OFFSET 1000
#define MAX 2000

using namespace std;

int x1, y1, x2, y2;
int arr[MAX][MAX]={0};

int main() {
    for(int i=1;i<4;i++){
        cin >> x1 >> y1 >> x2 >> y2;
        for(int j=x1;j<x2;j++){
            for(int k=y1;k<y2;k++){
                arr[j][k]=i;
            }
        }
    }

    int cnt=0;
    for(int i=0;i<MAX;i++){
        for(int j=0;j<MAX;j++){
            if(arr[i][j]==1 || arr[i][j]==2)
                cnt++;
        }
    }
    cout << cnt;
    
    return 0;
}