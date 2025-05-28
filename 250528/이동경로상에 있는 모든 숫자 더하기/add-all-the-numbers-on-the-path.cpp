#include <iostream>
using namespace std;

int N, T;
string dirs;
int arr[99][99] = {0};

// 동, 남, 서, 북 (시계방향)
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool InRange(int x, int y) {
    return (0 <= x && x < N && 0 <= y && y < N);
}

int main() {
    cin >> N >> T;
    cin >> dirs;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> arr[i][j];

    int x = N / 2;
    int y = N / 2;
    int dir_num = 3;  // 북쪽

    int sum = arr[x][y];

    for (int i = 0; i < T; i++) {
        char cmd = dirs[i];
        if (cmd == 'F') {
            int nx = x + dx[dir_num];
            int ny = y + dy[dir_num];
            if (InRange(nx, ny)) {
                x = nx;
                y = ny;
                sum += arr[x][y];
            }
        } else if (cmd == 'L') {
            dir_num = (dir_num + 3) % 4; // 왼쪽 회전
        } else if (cmd == 'R') {
            dir_num = (dir_num + 1) % 4; // 오른쪽 회전
        }
    }

    cout << sum;
    return 0;
}
