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
    return InRange(x,y) && !visited[x][y] && a[x][y];
}
void BFS(){
    while(!q.empty()){
        pair<int, int> curr_pos = q.front();
        int x = curr_pos.first; int y = curr_pos.second;
        q.pop();

        int dx[4]={1,0,-1,0};
        int dy[4]={0,1,0,-1};

        for(int i=0;i<4;i++){
            int nx = x+dx[i];
            int ny = y+dy[i];

            if(CanGo(nx,ny)){
                q.push(make_pair(nx,ny));
                visited[nx][ny] = true;
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
    q.push(make_pair(0,0));
    visited[0][0] = true;

    BFS();

    cout << visited[n-1][m-1];

    // Please write your code here.

    return 0;
}
