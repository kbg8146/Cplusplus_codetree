#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int arr[50][50];
    int nx = 0;
    int ny = 0;
    int x = 0;
    int y = 0;
    int dx[4]={1,0,-1,0};
    int dy[4]={0,-1,0,1};
    int dir_num=2;

    bool InRange(int x, int y){
        return (0<=x && x<n && 0<=y && y<n);
    }
    int direction(char dir){
        if(dir=='R'){
            return 0;
        }
        else if(dir=='D'){
            return 1;
        }
        else if(dir=='L'){
            return 2;
        }
        else if(dir=='U'){
            return 3;
        }
    }
    int N, T, R, C;
    cin >> N >> T;
    cin >> R >> C;
    for(int i=1;i<=T;i++){
        nx = x + dx[direction(C)];
        ny = y + dy[direction(C)];

        if(InRange(nx,ny)){
            x=nx;
            y=ny;
        }
        else{
            dir_num = (dir_num+2)%4;
        }
    }

    return 0;
}