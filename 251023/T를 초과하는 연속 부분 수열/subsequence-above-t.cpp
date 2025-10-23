#include <iostream>

using namespace std;

int n, t;
int arr[1000];

int main() {
    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]>t){
            cnt++;
        }
        else{
            cnt=0;
        }
        ans = max(cnt,ans);
    }
    cout << cnt;
    // Please write your code here.

    return 0;
}