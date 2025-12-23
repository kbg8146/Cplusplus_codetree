#include <iostream>

using namespace std;

int N, K;
int arr[1000];

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int res=0; int cnt = 0;
    for (int i = 0; i < N; i++) {

        // 최소
        for(int j=0;j<N;j++){
            if(arr[i] <= arr[j] && arr[j] <= arr[i]+K){
                cnt++;
            }
        }
        res = max(res, cnt);
        cnt = 0;
        
        //최대
        for(int j=0;j<N;j++){
            if(arr[i]-K <= arr[j] && arr[j] <= arr[i]){
                cnt++;
            }
        }
        res = max(res, cnt);
        cnt = 0;
    }
    cout << res;

    // Please write your code here.

    return 0;
}