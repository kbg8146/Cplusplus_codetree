#include <iostream>

using namespace std;

int n;
int grid[100][100];
bool visited[100][100];
int cnt=0;
int max_cnt=1;
int ans=1;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

bool InRange(int x, int y){
    return 0<=x && x<n && 0<=y && y<n;
}

bool CanGo(int x, int y,int nx, int ny){
    if(!InRange(nx,ny)) return false;
    if(visited[nx][ny]==1) return false;
    return true;
}

int DFS(int x, int y){

    for(int i=0;i<4;i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if(grid[nx][ny]==grid[x][y]){
            if(CanGo(x,y,nx,ny)){
                visited[nx][ny] = 1;
                max_cnt++;
                if(max_cnt==4) cnt++;
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
    visited[0][0] = 1;
    //DFS(0,0);
    for(int num=1;num<=100;num++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==num){
                    ans = max(ans, DFS(i,j));
                    max_cnt=0;
                }
            }
        }
    }


    cout << cnt <<" " <<ans;

    return 0;
}