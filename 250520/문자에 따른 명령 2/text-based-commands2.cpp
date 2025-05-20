#include <iostream>
using namespace std;

int main() {
    char dir;

    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};

    int dir_num=0;
    
    int x=0,y=0;
    
    while(1){
        cin >> dir;
        if(dir=='R'){
            dir_num=(dir_num+1)%4;
        }else if(dir=='L'){
            dir_num=(dir_num+4-1)%4;
        }

        if(dir=='F'){       
            x = x + dx[dir_num];
            y = y + dy[dir_num];
            break;
        }

    }
    cout << x << " " << y;

    return 0;
}