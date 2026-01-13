#include <iostream>

using namespace std;

int N;
int grid[20][20];
int count = 0;

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }
    int ans=0;
    for(int i=0;i<=N-3;i++){
        for(int j=0;j<=N-3;j++){
            count=0;
            for(int k=i;k<i+3;k++){
                for(int l=j;l<j+3;l++){
                    if(grid[k][l]) count++;
                                       
                }
            }
            ans = max(count,ans);
            //cout <<i << ","<< j << " : "<<  count << endl; 
        }
    }
    
    cout << ans;

    return 0;
}
