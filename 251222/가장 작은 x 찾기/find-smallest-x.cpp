#include <iostream>

using namespace std;

int n;
int a[10], b[10];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    int res=0; int temp_i=0; int cnt=0;
    for(int i=1;i<=10;i++){
        temp_i = i;
        for(int j=0;j<n;j++){
            temp_i = 2*temp_i;
            if(a[j] <= temp_i && temp_i <= b[j]){
                cnt++;
            }
            if(cnt==4) res = i;
        }
    }
    cout << res;
    // Please write your code here.

    return 0;
}