#include <iostream>
#include <string>
using namespace std;

int n,t;
string dirs;

int arr[100][100];

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

bool InRange(int x, int y){
    return 0 <= x && x < n && 0 <= y && y < n;
}

int main() {

    cin >> n >> t;
    cin >> dirs;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    int x = n/2; int y = n/2;
    int dir=3;
    int sum = arr[x][y];
    for(int i=0;i<t;i++){
        if(dirs[i]=='L'){
            dir= (dir+3)%4;
        }
        else if(dirs[i]=='R'){
            dir=(dir+1)%4;
        }
        else if(dirs[i]=='F'){
            int nx = x + dx[dir]; int ny = y + dy[dir];
            if(InRange(nx,ny)){
                x = x+dx[dir]; y = y+dy[dir];
                sum += arr[x][y];
            }
        }
    }
    cout << sum;

    // Please write your code here.
    return 0;
}