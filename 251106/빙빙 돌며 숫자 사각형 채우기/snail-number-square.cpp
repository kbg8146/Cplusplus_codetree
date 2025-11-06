#include <iostream>

#define MAX 101

using namespace std;

int n, m;

int arr[MAX][MAX];

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

bool InRange(int x, int y){
    return 0 <= x && x <n && 0 <= y && y < m;
}

int main() {

    cin >> n >> m;

    int x = 0, y = 0;
    int dir=0;
    
    arr[0][0] = 1;

    for(int i=2;i<=n*m;i++){
        
        int nx = x + dx[dir]; int ny = y + dy[dir];

        if(!InRange(nx, ny) || arr[nx][ny]!=0){
            dir=(dir+1)%4;
        }

        x = x+dx[dir]; y = y+dy[dir];
        arr[x][y]=i;

    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Please write your code here.
    return 0;
}