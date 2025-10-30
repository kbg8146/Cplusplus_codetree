#include <iostream>

#define MAX 1000000

using namespace std;

int n,m;
int a[MAX+1], b[MAX+1];

int main() {

    cin >> n >> m;
    int v , t;
    int atime=0;
    for(int i=0;i<n;i++){
        cin >> v >> t;
        while(t--){
            a[atime]=a[atime-1]+v;
            atime++;
        }
    }
    int btime=0;
    for(int i=0;i<m;i++){
        cin >> v >> t;
        while(t--){
            b[btime]=b[btime-1]+v;
            btime++;
        }
    }

    int ans=-1; int cnt=0;
    for(int i=0;i<atime;i++){
        if(a[i]>b[i]){
            if(ans!=1){
                ans=1;
                cnt++;
            }
        }
        else if(a[i]<b[i]){
            if(ans!=2){
                ans=2;
                cnt++;
            }
        }
        else{
            if(ans!=0){
                ans=0;
                cnt++;
            }
        }
    }
    cout << cnt;
    // Please write your code here.
    return 0;
}