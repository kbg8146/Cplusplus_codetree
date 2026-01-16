#include <iostream>

using namespace std;

int n;
int grid[100][100];
int ans;

int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};

bool InRange(int x, int y){
    return 0<=x && x<n && 0<=y && y<n;
}

int calculate(int i, int j,int head){
    int cnt=1;
    while(1){

        if(grid[i][j]==1){
            if(head==1) head=0;
            else if(head==2) head=3;
            else if(head==0) head=1;
            else head=2;
        }
        else if(grid[i][j]==2){
            if(head==1) head=2;
            else if(head==2) head=1;
            else if(head==0) head=3;
            else head=0;
        }

        int nx = i+dx[head];
        int ny = j+dy[head];

        if(InRange(nx,ny)){
            i = nx;
            j = ny;
            cnt++;
        }
        else{
            cnt++;
            break;
        }
    }
    return cnt;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> grid[i][j];

    int head; 
    int j;
    for(int i=0;i<n;i++){
        ans = max(calculate(i,0,1),ans);
        ans = max(calculate(i,n-1,3),ans);
    }
    int i;
    for(int j=0;j<n;j++){
        ans = max(calculate(0,j,2),ans);
        ans = max(calculate(n-1,j,0),ans);
    }

    cout << ans;
    return 0;
}
