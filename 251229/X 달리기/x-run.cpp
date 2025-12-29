#include <iostream>

using namespace std;

int X;
int v=1;
int dist=0;

int main() {
    cin >> X;
    int half=X/2; int cnt=1;
    while(1){
        if(dist<=half){
            dist=dist+v;
            v++;
        }
        else {
            dist=dist+v;
            v--;
            if(v==0) v=1;
        }
        //cout << dist << "("<< v <<")" << " ";

        cnt++;
        if(dist>X) break;
    }
    //cout << endl;
    cout << cnt;
    // Please write your code here.

    return 0;
}