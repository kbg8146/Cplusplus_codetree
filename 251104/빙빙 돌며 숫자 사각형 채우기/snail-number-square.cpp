#include <iostream>

#define MAX_NUM 100
#define DIR_NUM 4

using namespace std;

int n, m;
int arr[MAX_NUM][MAX_NUM];

int dx[DIR_NUM]={0,1,0,-1};
int dy[DIR_NUM]={1,0,-1,0};

int curr_x, curr_y;
int dir;

bool InRange(int x,int y){
    return 0 <= x && x < n && 0 <= y && y < m;
}

int main() {

    cin >> n >> m;

    arr[curr_x][curr_y] = 1;

    for(int i = 2; i <= n*m; i++){
        int next_x = curr_x + dx[dir], next_y = curr_y + dy[dir];

        if(!InRange(next_x, next_y) || arr[next_x][next_y] != 0)
            dir = (dir + 1) % 4;

        curr_x = curr_x + dx[dir]; curr_y = curr_y + dy[dir];
        arr[curr_x][curr_y] = i;
    }

    for(int i=0; i<n;i++){
        for(int j=0;j<m;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Please write your code here.
    return 0;
}