#include <iostream>
using namespace std;

int N,T;
string dirs;
int arr[99][99]={0};

int dx[4]={1,0,-1,0};
int dy[4]={0,-1,0,1};

bool InRange(int x, int y){
    return (0<=x && x<N && 0<=y && y<N);
}   
/*
int GetDirNum(char dir){
    if(dir=='R'){
        return 0;
    }
    else if(dir=='L'){
        return 2;
    }
    return -1;
}
*/
int main() {
    cin >> N >> T;
    cin >> dirs;

    int x=N/2;
    int y=N/2;

    int dir_num=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> arr[i][j];
        }
    }    
    int sum=arr[x][y];
    for(int i=0;i<T;i++){

        if(dirs[i]=='F'){
            int nx = x+dx[dir_num];
            int ny = y+dy[dir_num];
            if(InRange(nx,ny)){
                x=nx;
                y=ny;
                sum+=arr[x][y];
            }
        }
        else if(dirs[i]=='R'){
            dir_num=(dir_num+1)%4;
        }
        else if(dirs[i]=='L'){
            dir_num=(dir_num+3)%4;
        }
        

    }
    cout << sum;
    // Please write your code here.
    return 0;
}