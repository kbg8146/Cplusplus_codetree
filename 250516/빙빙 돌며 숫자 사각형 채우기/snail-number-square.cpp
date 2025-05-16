#include <iostream>
using namespace std;
    int N=0;
    int M=0;

    bool InRange(int x,int y){
        return(0<=x && x<N && 0<=y && y <M);
    }

int main() {
  
    cin >> N >> M;

    int answer[101][101]={0};


    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};
    int x=0,y=0;
    int dir_num = 0;

    answer[0][0]=1;

    for(int i = 2;i <= N*M;i++){
        int nx = x +dx[dir_num],ny=y+dy[dir_num];

        if(!InRange(nx,ny) || answer[nx][ny]!=0)
            dir_num = (dir_num+1) % 4;
        
        x=x+dx[dir_num]; y=y+dy[dir_num];
        answer[x][y]=i;
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }
    // Please write your code here.
    return 0;
}