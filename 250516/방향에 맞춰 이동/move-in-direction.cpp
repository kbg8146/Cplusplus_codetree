#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,-1,0,1};
    int nx =0;
    int ny = 0;
    char dr;
    int ds;
    int dir_num;

    for(int i=0;i<n;i++){
        cin >> dr >> ds;

        if(dr=='E'){
            dir_num = 0;
        }
        else if(dr == 'S'){
            dir_num = 1;
        }
        else if(dr == 'W'){
            dir_num = 2;
        }
        else if(dr =='N'){
            dir_num = 3;
        }
        nx = nx + ds*dx[dir_num];
        ny = ny + ds*dy[dir_num];
    }
    cout << nx << " "<< ny;
    return 0;
}