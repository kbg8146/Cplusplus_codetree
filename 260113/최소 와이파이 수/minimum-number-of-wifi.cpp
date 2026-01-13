#include <iostream>

using namespace std;

int n, m;
int arr[100];

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int left=0, right=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            left = i+1;
            break;
        }
    }
    for(int i=n-1;i>0;i--){
        if(arr[i]==1){
            right = i+1;
            break;
        }
    }
    //cout << "right: " << right << " , left: " << left << endl;
    int ans = (right-left+1)/3;
    cout << ans;

    return 0;
}