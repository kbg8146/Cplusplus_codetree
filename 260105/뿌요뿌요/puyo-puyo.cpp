#include <iostream>
#include <vector>

using namespace std;

int n, color;
int grid[100][100];
bool visited[100][100];
int cnt, bomb_cnt;

bool InRange(int x, int y){
    return 0<=x && x<n && 0<=y && y<n;
}
bool CanGo(int x, int y, int color){
    if(!InRange(x,y)) return false;
    if(visited[x][y]) return false;
    if(grid[x][y]!=color) return false;
    return true;
}
void DFS(int x, int y, int color){
    int dx[4]={1,0,-1,0};
    int dy[4]={0,-1,0,1};
    for(int i=0;i<4;i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(CanGo(nx,ny,color)){
            cnt++;
            visited[nx][ny]=true;
            DFS(nx,ny,color);
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
    int big = 0;
    for(int i=1;i<=100;i++){
        DFS(0,0,i);
        big = max(cnt,big);
        if(cnt>=4){
            bomb_cnt++;
        }
        cnt=0;
    }
    cout << bomb_cnt << " " << big;
    return 0;
}
