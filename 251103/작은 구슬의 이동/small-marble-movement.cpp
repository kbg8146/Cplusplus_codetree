#include <iostream>
using namespace std;

int n;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

bool InRange(int x, int y){
    return 0 <= x && x < n && 0 <= y && y < n;
}

int arr[100][100];

int getDir(char D){
    if(D=='R') return 0;
    else if(D=='D') return 1;
    else if(D=='L') return 2;
    else return 3;
}

int main() {
    int T=0;
    int R=0, C=0;
    char D;
    cin >> n >> T;
    cin >> R >> C >> D;

    int x=R-1;
    int y=C-1;

    int dir = getDir(D);
    for(int i=0;i<T;i++){
        int nx= x + dx[dir];
        int ny= y + dy[dir];
        if(InRange(nx,ny)==0){
            dir=(dir+2)%4;
        }
        else{
            x = nx;
            y = ny;
        }
    }
    cout << x+1 << " " << y+1;

    // Please write your code here.
    return 0;
}