#include <iostream>
using namespace std;

int dx[4]={1,0,-1,0},dy[4]={0,-1,0,1};

int GetDir(char a){
    if(a=='R'){
        return 0;
    }
    else if(a=='D'){
        return 1;
    }
    else if(a=='U'){
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
    int x=R;
    int y=C;
    int nx,ny;
    for(int i=0;i<T;i++){
        nx=x+dx[GetDir(D)];
        ny=y+dy[GetDir(D)];
        if(InRange(nx,ny)){
            x=nx;
            y=ny;
        }   
    }
    cout << x << " " << y;

    return 0;
}