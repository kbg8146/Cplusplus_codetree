#include <iostream>

#define MAX 1000

using namespace std;

int a[MAX+1], b[MAX+1];
int n,m;


int main() {
    cin >> n >> m;

    int time_a=1;
    for(int i=0;i<n;i++){
        char d;int t; 
        cin >> d >> t;
        while(t--){
            if(d=='R'){
                a[time_a]=a[time_a-1]+1;
            }
            else{
                a[time_a]=a[time_a-1]-1;
            }
            time_a++;
        }
    }

    int time_b=1;
    for(int i=0;i<m;i++){
        char d; int t;
        cin >> d >> t;
        while(t--){
            if(d=='R'){
                b[time_b]=b[time_b-1]+1;
            }
            else{
                b[time_b]=b[time_b-1]-1;
            }
            time_b++;
        }
    }

    int ans = -1;
    for(int i=1;i<time_a;i++){
        if(a[i]==b[i]){
            cout << i;
            break;
        }
    }
    // Please write your code here.
    return 0;
}