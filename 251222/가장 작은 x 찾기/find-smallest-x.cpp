#include <iostream>
#include <climits>
using namespace std;

int n;
int a[10], b[10];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    int res=INT_MAX; int temp_i=0; int cnt=0; int least = INT_MAX;
    for(int i=1;i<=10;i++){
        cnt = 0;
        temp_i = i;
        for(int j=0;j<n;j++){
            temp_i = 2*temp_i;
            if(a[j] <= temp_i && temp_i <= b[j]){
                cnt++;
            }
            else{
                break;
            }
        }
        if(cnt==n) {
            res = i;
            least = min(res,least);
        }
    }
    cout << least;
    // Please write your code here.

    return 0;
}