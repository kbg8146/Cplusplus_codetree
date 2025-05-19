#include <iostream>
using namespace std;

int main() {

    int N;
    cin >> N;
    char dir;
    int step=0;
    int x=0, y=0;
    int dir_num;

    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};

    for(int i=0;i<N;i++){
        cin >> dir >> step;
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
        x= x+step*dx[dir_num];
        y = y+step*dy[dir_num];
    }
    cout << x << " " << y;
    // Please write your code here.
    return 0;
}