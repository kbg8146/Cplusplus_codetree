#include <iostream>
#include <queue>

using namespace std;

int n, m;
int a[100][100];

queue<pair<int,int>> q;
bool visited[100][100];

bool InRange(int x, int y){
    return 0<=x && x<n && 0<=y && y<m;
}
bool CanGo(int x, int y){
    if(!InRange(x,y)||visited[x][y]||!a[x][y]) return false;
    return true;
}
void BFS(){
    while(!q.empty()){
        int x = q.front().first, y =q.front().second; q.pop();

        int dx[4] = {1,0,-1,0}, dy[4]={0,1,0,-1};

        for(int i=0;i<4;i++){
            int nx = x + dx[i], ny = y + dy[i];
            if(CanGo(nx,ny)){
                q.push({nx,ny});
                visited[nx][ny] = true;
                BFS();
            }

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
    q.push({0,0});
    visited[0][0] = true;
    BFS();

    cout << visited[n-1][m-1];

    // Please write your code here.

    return 0;
}
