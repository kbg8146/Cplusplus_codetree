#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int grid[100][100];
bool visited[100][100];

int max_block;
int bomb_cnt;

int curr_block_num;

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
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};

    for(int i=0;i<4;i++){
        int nx = x+dx[i];
        int ny = y+dy[i];

        if(CanGo(nx,ny,grid[x][y])){
            visited[nx][ny] = true;
            curr_block_num++;
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
                curr_block_num = 1;

                DFS(i,j);

                if(curr_block_num>=4)
                    bomb_cnt++;
                
                max_block = max(max_block, curr_block_num);
            }
        }
    }
    cout << bomb_cnt << " " << max_block;

    // Please write your code here.

    return 0;
}
