#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string dis;
    cin >> dis;

    int dx[4]={1,0,-1,0};
    int dy[4]={0,-1,0,1};
    int nx=0;
    int ny=0;
    int dir_num=3;

    for(int i=0;i<dis.size();i++){
        char dis_single = dis[i];
        if(dis_single=='F'){
            nx+=dx[dir_num];
            ny+=dy[dir_num];
        }
        else if(dis_single=='L'){
            dir_num = (dir_num+3)%4;
        }
        else if(dis_single =='R'){
            dir_num = (dir_num+1)%4;
        }
    }
    cout << nx << " " << ny;

    return 0;
}