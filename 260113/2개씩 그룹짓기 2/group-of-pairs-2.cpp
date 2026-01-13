#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int n;
int ans = INT_MAX;
int arr[200000];

int main() {
    cin >> n;
    for (int i = 0; i < 2 * n; i++) {
        cin >> arr[i];
    }
    sort(arr,arr+2*n);

    for(int i=0;i<n;i++){
        cout << arr[2*i+1] << " , " << arr[i] << endl;
        ans = min(ans, arr[2*i+1]-arr[i]);
    }
    cout << ans;
    // Please write your code here.

    return 0;
}