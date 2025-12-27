#include <iostream>
#include <algorithm>
using namespace std;

int n;
int grid[100][100];
bool visited[100][100];
int cnt=0;
int ans=1;
int num_cnt[10000];
int max_cnt;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

bool InRange(int x, int y){
    return 0<=x && x<n && 0<=y && y<n;
}

bool CanGo(int x, int y,int nx, int ny){
    if(!InRange(nx,ny)) return false;
    if(visited[nx][ny]) return false;
    return true;
}

int DFS(int x, int y){

    for(int i=0;i<4;i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        
        if(CanGo(x,y,nx,ny)){
            if(grid[nx][ny]==grid[x][y]){
                visited[nx][ny] = 1;
                max_cnt++;
                
                DFS(nx,ny);
            } 
        }
    }
    return max_cnt;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    max_cnt=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(visited[i][j]==0){
                visited[i][j]=1;
                max_cnt=1;
                int cnt1 = DFS(i,j);
                if(cnt1>=4) cnt++;
                num_cnt[(i)*n+j]= max(num_cnt[(i)*n+j],cnt1);
            }
        }
    }
    int big=0;
    for(int i=0;i<n*n;i++){
        big = max(num_cnt[i],big);
    }


    cout << cnt <<" " <<big;

    return 0;
}