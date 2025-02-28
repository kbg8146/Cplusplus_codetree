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

    while(1){
        cin >> dis;
        if(dis=='F'){
            nx+=dx[dir_num];
            ny+=dy[dir_num];
            break;
        }
        else if(dis=='L'){
            dir_num = (dir_num+3)%4;
        }
        else if(dis =='R'){
            dir_num = (dir_num+1)%4;
        }
    }
    cout << nx << " " << ny;

    return 0;
}