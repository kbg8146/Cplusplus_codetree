#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char dir, dis;
    int dx[4]={1,0,-1,0};
    int dy[4]={0,-1,0,1};
    int nx=0;
    int ny=0;
    int dir_num=3;

    cin >> dir >> dis;
    if(dir=='L'){
        dir_num-=1;
    }
    else if(dir =='R'){
        dir_num+=1;
    }
    if(dis=='F'){
        nx+=dx[dir_num];
        ny+=dy[dir_num];
    }
    cout << nx << " " << ny;

    return 0;
}