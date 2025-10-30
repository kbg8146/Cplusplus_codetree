#include <iostream>

#define MAX 1000

using namespace std;

int a[MAX+1];
int b[MAX+1];

int main() {
    int n,m;
    cin >> n >> m;

    int atime=1;
    for(int i=0;i<n;i++){
        char d; int t;
        cin >> d >> t;
        while(t--){
            if(d=='R'){
                a[atime]=a[atime-1]+1;
            }
            else{
                a[atime]=a[atime-1]-1;
            }
            atime++;        
        }
    }
    int btime=1;
    for(int i=0;i<m;i++){
        char d; int t;
        cin >> d >> t;
        while(t--){
            if(d=='R'){
                b[btime]=b[btime-1]+1;
            }
            else{
                b[btime]=b[btime-1]-1;
            }
            btime++;
        }
    }
    int ans=-1;
    int maxtime=min(atime,btime);
    for(int i=1;i<maxtime;i++){
        if(a[i]==b[i]){
            ans = i;
            break;
        }
    }
    cout << ans;
    // Please write your code here.
    return 0;
}