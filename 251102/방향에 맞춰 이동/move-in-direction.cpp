#include <iostream>
using namespace std;

int n;
char dir;
int num;

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

int main() {
    cin >> n;

    int x=0,y=0;
    int nx=0,ny=0;
    int dir_num=0;
    for(int i=0;i<n;i++){
        cin >> dir >> num;

        if(dir=='N'){
            dir_num=0;
        }
        else if(dir=='E'){
            dir_num=1;
        }
        else if(dir=='S'){
            dir_num=2;
        }
        else{
            dir_num=3;
        }
        x = x + dx[dir_num]*num;
        y = y + dy[dir_num]*num;        
  
    }
    cout << x << " " << y ;

    // Please write your code here.
    return 0;
}