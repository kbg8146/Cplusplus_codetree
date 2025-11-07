#include <iostream>
using namespace std;

int arr[101];

int main() {
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]<=arr[j] && arr[j]<=arr[k]){
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
    // Please write your code here.
    return 0;
}