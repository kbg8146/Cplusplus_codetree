#include <iostream>
#include <queue>
#include <algorithm>
#include <climits>

using namespace std;

int n, m;
int a[100][100];

queue<pair<int,int>> q;
bool visited[100][100];
int step[100][100];

int ans = INT_MAX;

bool InRange(int x, int y){
    return 0<=x && x<n && 0<=y && y<m;
}
bool CanGo(int x, int y){
    if(!InRange(x,y)) return false;
    if(visited[x][y]) return false;
    if(a[x][y]==0) return false;
    return true;
}
void Push(int nx, int ny, int new_step){
    q.push({nx,ny});
    visited[nx][ny] = true;
    step[nx][ny] = new_step;
}
void BFS(){
    while(!q.empty()){
        pair<int,int> curr_pos = q.front(); q.pop();
        int x = curr_pos.first, y= curr_pos.second;
        
        int dx[4] ={1,0,-1,0}, dy[4] = {0,1,0,-1};
        for(int i=0;i<4;i++){
            int nx = x+dx[i], ny = y+dy[i];
            if(CanGo(nx,ny)){
                
                Push(nx,ny,step[x][y] + 1);
            }
        }
        if(visited[n-1][m-1]){
            ans = step[n-1][m-1];
        }
    }
}
int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    Push(0,0,0);
    BFS();

    if(ans == INT_MAX){
        ans = -1;
    }

    cout << ans;
    // Please write your code here.

    return 0;
}
