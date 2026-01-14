#include <iostream>
#include <algorithm>
using namespace std;

int arr[7];

int main() {
    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    }
    sort(arr,arr+7);

    int A = arr[6]-arr[5];
    int B=0;
    int C=0;
    for(int i=1;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]+arr[j]==arr[5]){
                B=arr[i];
                C=arr[j];

                break;
            }
        }
    }
    cout << A << " " << B << " " << C;
    // Please write your code here.

    return 0;
}