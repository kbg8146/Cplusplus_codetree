#include <iostream>
#include <string>

#define MAX_N 100
#define DIR_NUM 4

using namespace std;

int n;
int arr[MAX_N][MAX_N];

int dx[DIR_NUM] = {0, 1,  0, -1};
int dy[DIR_NUM] = {1, 0, -1,  0};

bool InRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

int AdjacentCnt(int x, int y) {
    int cnt = 0;
    for(int i = 0; i < DIR_NUM; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if(InRange(nx, ny) && arr[nx][ny] == 1)
            cnt++;
    }
    
    return cnt;
}

int main() {
    // 입력
    cin >> n;
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];
    
    // 각 칸을 탐색합니다.
    int ans = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(AdjacentCnt(i, j) >= 3)
                ans++;
    
    cout << ans;
    return 0;
}
