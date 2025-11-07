#include <iostream>
#include <climits>
#include <algorithm>
#include <cstdlib>
using namespace std;

int arr[101];

int main() {
    int N;
    cin >> N;

    for(int i=1;i<=N;i++){
        cin >> arr[i];
    }

    int ans=INT_MAX;
    for(int i=1;i<=N;i++){
        int dist=0;
        for(int j=1;j<=N;j++){
            dist+=abs(i-j)*arr[j];
        }
        ans = min(ans,dist);
    }
    cout << ans;

    // Please write your code here.
    return 0;
}