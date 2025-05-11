#include <iostream>

#define MAX_T 1000000

using namespace std;

int n,m;
int pos_a[MAX_T+1],pos_b[MAX_T+1];

int main(){
    cin >> n >> m;

    int time_a = 1;
    for(int i=0;i<n;i++){
        char d; int t;
        cin >> d >> t;

        while(t--){
            if(d=='R')
                pos_a[time_a]=pos_a[time_a-1]+1;
            else if(d=='L')
                pos_b[time_a]=pos_b[time_a-1]-1;
            time_a++;
        }
    }

    int time_b = 1;
    for(int i=0;i<m;i++){
        char d; int t;
        cin >> d >> t;

        while(t--){
            if(d=='R')
                pos_a[time_b]=pos_a[time_b-1]+1;
            else if(d=='L')
                pos_b[time_b]=pos_b[time_b-1]-1;

            time_b++;
        }
    }

    int ans = -1;
    for(int i=1;i<time_a;i++){
        if(pos_a[i] == pos_b[i]){
            ans=i;
            break;
        }
    }

    cout << ans;
    return 0;
}