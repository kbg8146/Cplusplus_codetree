#include <iostream>
#include <vector>

using namespace std;

int n, color;
int grid[100][100];
bool visited[100][100];
int cnt, bomb_cnt;
int big;

bool InRange(int x, int y){
    return 0<=x && x<n && 0<=y && y<n;
}
bool CanGo(int x, int y, int color){
    if(!InRange(x,y)) return false;
    if(visited[x][y]) return false;
    if(grid[x][y]!=color) return false;
    return true;
}
void DFS(int x, int y){
    int dx[4]={1,0,-1,0};
    int dy[4]={0,-1,0,1};
    for(int i=0;i<4;i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(CanGo(nx,ny,grid[x][y])){
            visited[nx][ny]=true;
            cnt++;
            DFS(nx,ny);
        }
    }
}
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(!visited[i][j] && grid[i][j]){
                visited[i][j] = true;
                cnt = 1;
                DFS(i,j);

                if(cnt>=4) bomb_cnt++;

                big = max(big,cnt);
            }
        }
    }

    cout << bomb_cnt << " " << big;
    return 0;
}
