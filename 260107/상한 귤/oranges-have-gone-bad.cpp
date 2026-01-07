#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<vector<int>> a(N, vector<int>(N));
    vector<vector<int>> dist(N, vector<int>(N, -1));
    queue<pair<int,int>> q;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> a[i][j];
            if (a[i][j] == 2) {          // 초기 상한 귤들 = BFS 시작점(다중)
                dist[i][j] = 0;
                q.push({i, j});
            }
        }
    }

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
            if (a[nx][ny] != 1) continue;      // 신선한 귤(1)만 새로 상하게 됨 (0은 빈칸, 2는 이미 상함)
            if (dist[nx][ny] != -1) continue;  // 이미 방문(상한 시간 확정)

            dist[nx][ny] = dist[x][y] + 1;
            q.push({nx, ny});
        }
    }

    // 출력 규칙에 맞게 변환
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int out;
            if (a[i][j] == 0) out = -1;            // 빈 칸
            else if (dist[i][j] == -1) out = -2;   // 귤이 있는데 끝까지 안 상함(=1만 해당)
            else out = dist[i][j];                 // 상한 시간(2는 0으로 이미 들어있음)

            cout << out;
            if (j + 1 < N) cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}
