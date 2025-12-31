#include <iostream>
using namespace std;

signed int arr[100001];

int main() {
    int N=0;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    sort(arr,arr+N,greater<>());

    int ans =1;
    int ans1 = 0; int ans2 = 0;

    ans1 =arr[0]*arr[1]*arr[2];
    ans2 = arr[0] * arr[N-1] * arr[N-2];
    ans = max(ans1, ans2);
    //cout << endl;
    cout << ans;
    // Please write your code here.
    return 0;
}