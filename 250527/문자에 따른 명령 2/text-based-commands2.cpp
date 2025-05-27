#include <iostream>
#include <string>
using namespace std;

int main() {
    string dirs;
    cin >> dirs;
    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};

    int dir_num=0;
    
    int x=0,y=0;
    
    for(char dir : dirs){
        if(dir=='R'){
            dir_num=(dir_num+1)%4;
        }else if(dir=='L'){
            dir_num=(dir_num+4-1)%4;
        }
        else if(dir=='F'){   
            x = x + dx[dir_num];
            y = y + dy[dir_num];    

        }

    }

    cout << x << " " << y;

    return 0;
}