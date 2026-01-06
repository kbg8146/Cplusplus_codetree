#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;

int n, k, u, d;
int grid[8][8];
int cnt;                 // ⭐ 매번 초기화해야 해서 1 고정 제거
int ans = 0;             // ⭐ 최대값 저장

queue<pair<int,int>> q;
bool visited[8][8];

vector<pair<int,int>> picked;   // ⭐ K개 시작점 저장

bool InRange(int x, int y){
    return 0<=x && x<n && 0<=y && y<n;
}
bool CanGo(int x, int y){
    if(!InRange(x,y)) return false;
    if(visited[x][y]) return false;
    return true;
}

void BFS(){
    while(!q.empty()){
        auto curr_pos = q.front();
        int x = curr_pos.first, y = curr_pos.second;
        q.pop();

        int dx[4]={1,0,-1,0}, dy[4]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nx = x+dx[i], ny = y+dy[i];
            if(CanGo(nx,ny)){
                int diff = abs(grid[nx][ny]-grid[x][y]);
                if(u<=diff && diff<=d){
                    cnt++;
                    visited[nx][ny] = true;
                    q.push({nx,ny});
                }
            }
        }
    }
}

// ⭐ 조합으로 시작점 K개 고르기 (최소 추가)
void Choose(int idx, int chosen){
    int total = n*n;

    if(chosen == k){
        // ⭐ BFS 한 번 돌릴 준비(초기화)
        while(!q.empty()) q.pop();
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                visited[i][j] = false;

        cnt = k; // ⭐ 시작 도시 포함

        for(auto &p : picked){
            visited[p.first][p.second] = true;
            q.push(p);
        }

        BFS();
        ans = max(ans, cnt);
        return;
    }
    if(idx == total) return;
    if(chosen + (total - idx) < k) return; // ⭐ 가지치기(선택)

    int x = idx / n;
    int y = idx % n;

    // 고른다
    picked.push_back({x,y});
    Choose(idx+1, chosen+1);
    picked.pop_back();

    // 안 고른다
    Choose(idx+1, chosen);
}

int main() {
    cin >> n >> k >> u >> d;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];

    Choose(0, 0);      // ⭐ (0,0) 고정 BFS 삭제하고 조합 시작
    cout << ans;       // ⭐ 최대값 출력
    return 0;
}
