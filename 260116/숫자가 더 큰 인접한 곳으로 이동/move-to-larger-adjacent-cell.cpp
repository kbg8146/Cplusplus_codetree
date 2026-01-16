#include <iostream>

using namespace std;

int n;
int r, c;
int a[100][100];

bool InRange(int x, int y){
    return 0<=x && x<n && 0<=y && y<n;
}

int main() {
    cin >> n >> r >> c;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    bool move;
    cout << a[r][c] << " ";
    while(1){
        move = false;
        int dx[4]={-1,1,0,0};
        int dy[4]={0,0,1,-1};

        for(int i=0;i<4;i++){
            
            int nx = r+dx[i];
            int ny = c+dy[i];
            
            if(a[nx][ny]>a[r][c]&&InRange(nx,ny)){
                cout << a[nx][ny] << " ";
                r = nx;
                c = ny;
                move = true;
                break;
            }
            else move = false;
        }
        if(move == false){
            break;
        }
    }

    return 0;
}
