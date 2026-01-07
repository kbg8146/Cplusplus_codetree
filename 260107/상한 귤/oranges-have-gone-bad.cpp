#include <iostream>
#include <queue>
using namespace std;

int n, m;
int a[100][100];
int dist[100][100];
bool visited[100][100];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

bool InRange(int x, int y){
    return 0 <= x && x < n && 0 <= y && y < m;
}

int main(){
    cin >> n >> m;

    queue<pair<int,int>> q;
    int sx = -1, sy = -1;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
            dist[i][j] = -1;          // ⭐ 핵심
            if(a[i][j] == 2){
                sx = i; sy = j;
            }
        }
    }

    // BFS 시작
    q.push({sx, sy});
    visited[sx][sy] = true;
    dist[sx][sy] = 0;

    while(!q.empty()){
        auto [x,y] = q.front(); q.pop();

        for(int i=0;i<4;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(!InRange(nx,ny)) continue;
            if(visited[nx][ny]) continue;
            if(a[nx][ny] == 0) continue;

            visited[nx][ny] = true;
            dist[nx][ny] = dist[x][y] + 1;
            q.push({nx,ny});
        }
    }

    // 출력
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j] == 0) cout << -1 << " ";
            else cout << dist[i][j] << " ";
        }
        cout << '\n';
    }
}
