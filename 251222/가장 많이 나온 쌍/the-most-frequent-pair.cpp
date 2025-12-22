#include <iostream>

using namespace std;

int n, m;
int a[100], b[100];


int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a[i] >> b[i];
    }

    int cnt = 0; int most = 0;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i!=j){
                cnt = 0;
                for(int k=0;k<m;k++){
                    if(i == a[k] && j == b[k]){
                        cnt++;
                    }
                    else if(i == b[k] && j == a[k]){
                        cnt++;
                    }
                }
                most = max(most, cnt);
            }
        }    
    }    
    cout << most;

    

    // Please write your code here.

    return 0;
}