#include <iostream>

using namespace std;

int n, m;
int grid[20][20];

int main() {
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> grid[i][j];
        }
    }
    
    int count=0,ans=-1;
    bool minus = true;
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            for(int x_offset = 0;x_offset<n-i;x_offset++){
                for(int y_offset = 0;y_offset<m-j;y_offset++){
                    
                    minus = true;
                    count = 0;
                    
                    int k,l;
                    for(k=i;k<=i+x_offset;k++){
                        for(l=j;l<=j+y_offset;l++){
                            if(grid[k][l]<=0) {
                                count=0;
                                minus = false;
                                break;
                            }
                            count++;
                            //cout << k << " , " << l << " : "<< grid[k][l] << endl;
                        }
                        if(!minus) {
                            count=0;
                            break;
                        }
                    }
                    if(!minus) {
                        count=0;
                        break;
                    }
                    //cout << count << endl;
                    if(minus) ans = max(ans,count);
                }
            }
        }
    }
    cout << ans;
    // Please write your code here.

    return 0;
}
