#include <iostream>
using namespace std;

int main() {
    char dir;
    char move;
    cin >> dir >> move;

    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};
    int dir_num=50000;
    int x=0,y=0;

    if(dir=='R'){
        dir_num=(dir_num+1)%4;
    }else if(dir=='L'){
        dir_num=(dir_num-1)%4;
    }

    x= x + dx[dir_num];
    y= y + dy[dir_num];

    cout << x << " " << y;

    return 0;
}