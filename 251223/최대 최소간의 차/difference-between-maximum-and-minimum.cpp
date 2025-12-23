#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int n, k;
int arr[100];

int cal(int min, int max){
    int sub=0;
    for(int i=0;i<n;i++){

        if(arr[i]<min){
            sub += abs(arr[i]-min);
        }
        else if(arr[i]>max){
            sub += abs(arr[i]-max);
        }
    }

    return sub;
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans=INT_MAX;
    for(int i=0;i<10000;i++){
        ans = min(ans,cal(i,i+k));
    }
    cout << ans;
    // Please write your code here.

    return 0;
}