#include <iostream>
#include <climits>

using namespace std;

int n;
int grid[50][50];
int afterbomb[50][50];
int temp[50][50];

bool InRange(int x, int y){
    return 0<=x && x<n && 0<=y && y<n;
}
void copy(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            afterbomb[i][j] = grid[i][j];
        }
    }
}

void bomb(int x, int y,int bomb_cnt){
    int dx[4]={1,0,-1,0};
    int dy[4]={0,1,0,-1};
    for(int i=0;i<4;i++){
        for(int j=0;j<bomb_cnt;j++){
            int nx = x + dx[i]*j;
            int ny = y + dy[i]*j;
            if(InRange(nx,ny)){
                afterbomb[nx][ny] = 0;
            }
        }
    }
}

int check_pair(){
    int cnt=0;
    for(int x=0;x<n;x++){
        for(int y=0;y<n;y++){
            
            int dx[2]={1,0};
            int dy[2]={0,1};
            
            for(int i=0;i<2;i++){
                int nx = x+dx[i];
                int ny = y+dy[i];
                //cout << "("<< x << "," << y <<") , (" << nx << "," << ny << ")" << endl;

                if(InRange(nx,ny)&&temp[x][y]==temp[nx][ny]&&temp[x][y]!=0){
                    cnt++;
                    //cout << "<"<< x << "," << y <<"> , <" << nx << "," << ny << ">" << endl;
                }
            }
        }
    }
    return cnt;
}

void gravity(){
    int x=n-1;
    for(int j=0;j<n;j++){
        for(int i=n-1;i>=0;i--){
            if(afterbomb[i][j]==0) continue;
            temp[x--][j]=afterbomb[i][j];
        }
        for(int i=x;i>=0;i--){
            temp[i][j] = 0;
        }
        x=n-1;
    }
}

int main() {
    cin >> n;
    // 입력 받기
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    //bomb(0,0,4);
    int ans = INT_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // 복제
            copy();
            // 폭탄 실행
            bomb(i,j,grid[i][j]);
            // 중력 실행
            gravity();

            // //확인용
            // for(int i=0;i<n;i++){
            //     for(int j=0;j<n;j++){
            //         cout << afterbomb[i][j];
            //     }
            //     cout << endl;
            // }
            // cout << endl;
            // for(int i=0;i<n;i++){
            //     for(int j=0;j<n;j++){
            //         cout << temp[i][j];
            //     }
            //     cout << endl;
            // }
            // cout << endl;
            // cout << check_pair() << endl << endl;
            // //

            
            ans = max(check_pair(),ans);
        }
    }
    cout << ans;
    //cout << check_pair();

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout << grid[i][j];
    //     }
    //     cout << endl;
    // }
    return 0;
}
