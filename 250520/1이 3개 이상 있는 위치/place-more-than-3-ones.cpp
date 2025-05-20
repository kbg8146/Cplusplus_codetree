#include <iostream>
using namespace std;

int N;

bool Inrange(int x,int y){
    return (0<=x && x<N && 0 <= y && y < N);
}

int main() {

    cin >> N;

    int arr[101][101]={0};
    int num;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> num;
            arr[i][j]=num;
        }
    }

    int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
    int cnt=0;
    int x=0,y=0;
    int ans=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){

            for(int dir_num=0;dir_num<4;dir_num++){
                int x=i,y=j;
                x = x + dx[dir_num];
                y = y + dy[dir_num];
                
                if(Inrange(x,y) && arr[x][y]==1){
                    cnt++; 
                }
            }                
            if(cnt>=3){
                    cnt=0;
                    ans++;
            }      
        }
    }
    cout << ans;


    return 0;
}
