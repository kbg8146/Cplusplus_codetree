#include <iostream>
using namespace std;

int n;
int arr[101][101];

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

bool InRange(int x, int y){
    return 0 <= x && x < n && 0 <= y && y < n;
}

int main() {
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }

    int cnt=0; int ans=0;
    int nx=0; int ny=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            for(int k=0;k<4;k++){
                nx = i +dy[k];
                ny = j +dx[k];
                if(arr[nx][ny]==1 && InRange(nx,ny)){
                    cnt++;
                }                    
            }                
            if(cnt>=3){
                ans++;
            }
            cnt=0;            
        }
    }
    cout << ans;
    // Please write your code here.
    return 0;
}