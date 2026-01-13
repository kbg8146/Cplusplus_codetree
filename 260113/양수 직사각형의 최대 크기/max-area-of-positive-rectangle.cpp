#include <iostream>

using namespace std;

int n, m;
int ans = -1;
int grid[20][20];

bool PositiveRect(int x1, int y1, int x2, int y2){
    for(int i=x1;i<=x2;i++){
        for(int j=y1;j<=y2;j++){
            if(grid[i][j] <= 0)
                return false;
        }
    }
    return true;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=i;k<n;k++){
                for(int l=j;l<m;l++){
                    if(PositiveRect(i,j,k,l)){
                        ans = max(ans, (k-i+1)*(l-j+1));
                    }
                }
            }
        }
    }
    cout << ans;

    return 0;
}
