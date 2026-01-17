#include <iostream>

using namespace std;

int n, m, t;
int a[20][20];
int count[20][20];
int r[400], c[400];
bool InRange(int x, int y){
    return 0<=x && x<n && 0<=y && y<n;
}

void search(int x, int y){
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         cout << count[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    int dx[4]={-1,0,1,0};
    int dy[4]={0,1,0,-1};
    for(int i=0;i<4;i++){
        int nx = x+dx[i];
        int ny = y+dy[i];
        //cout << i << endl;
        if(InRange(nx,ny)&&a[nx][ny]>a[x][y]){
            count[x][y]--;
            count[nx][ny]++;
            break;
        }
    }
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         cout << count[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
}

int main() {
    cin >> n >> m >> t;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            //cout << a[i][j] << " ";
        }
        //cout << endl;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            count[i][j]=0;
        }
    }
    for (int i = 0; i < m; i++) {
        cin >> r[i] >> c[i];
        r[i]--; c[i]--;
        count[r[i]][c[i]]=1;
    }

    for(int step=0;step<t;step++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(count[i][j] == 1){
                    search(i,j);
                }
            }
        } 
    }

    // 남은 구슬 수 출력
    int ans = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            ans += count[i][j];

    cout << ans;

    return 0;
}
