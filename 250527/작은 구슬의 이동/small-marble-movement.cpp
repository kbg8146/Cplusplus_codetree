#include <iostream>
using namespace std;

int dx[4]={0,-1,0,1},dy[4]={1,0,-1,0};

int GetDir(char a){
    if(a=='R'){
        return 0;
    }
    else if(a=='D'){
        return 1;
    }
    else if(a=='L'){
        return 2;
    }
    else{
        return 3;
    }
}
int N, T;
int R, C;
char D;

bool InRange(int x, int y){
    return (0<=x && x<N && 0<=y && y<N);
}
int main() {
    
    cin >> N >> T;
    cin >> R >> C >> D;
    int x=R-1;
    int y=C-1;
    int nx,ny;
    int dir_num = GetDir(D);
    for(int i=0;i<T;i++){
        nx=x+dx[dir_num];
        ny=y+dy[dir_num];

        if(InRange(nx,ny)){        
            x=nx;
            y=ny;
        }
        else{
            dir_num=(dir_num+2)%4;
        }
        //cout << x << y << endl;
    }
    cout << x+1 << " " << y+1;

    return 0;
}