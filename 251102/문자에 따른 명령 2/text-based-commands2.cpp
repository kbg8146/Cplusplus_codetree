#include <iostream>
#include <string>
using namespace std;

int dx[4]={1,0,-1,0};
int dy[4]={0,-1,0,1};


string dirs;

int main() {
    cin >> dirs;
    int dir=3;
    int x=0, y=0;
    for(int i=0;i<(int)dirs.size();i++){
        char c_dir = dirs[i];

        if(c_dir == 'R'){
            dir=(dir+1)%4;
        }
        else if(c_dir == 'L'){
            dir=(dir+3)%4;
        }
        else {
            x += dx[dir];
            y += dy[dir];
        }
    }
    cout << x << " " << y;
    // Please write your code here.
    return 0;
}