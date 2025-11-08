#include <iostream>
using namespace std;

int a[1001];
int b[1001];

int atime, btime;

int main() {
    int N, M;
    cin >> N >> M;

    int v=0,t=0,dist=0;
    for(int i=0;i<N;i++){
        cin >> v >> t;
        for(int j=1;j<=t;j++){
            dist += v;
            a[atime++] = dist;
        }
        
    }
    dist=0;
    for(int i=0;i<M;i++){
        cin >> v >> t;
        for(int j=1;j<=t;j++){
            dist += v;
            b[btime++] = dist;
        }
    }

    int leader=-1,cnt=0;
    for(int i=0;i<max(atime,btime);i++){
        if(a[i]>b[i]){
            if(leader != 1){
                cnt++;
            }
            leader =1;

        }
        else if(a[i]<b[i]){
            if(leader != 2){
                cnt++;
            }
            leader =2;
        }
        else{
            if(leader != 3){
                cnt++;
            }
            leader =3;
            
        }
    }
    cout << cnt;
    // Please write your code here.
    return 0;
}