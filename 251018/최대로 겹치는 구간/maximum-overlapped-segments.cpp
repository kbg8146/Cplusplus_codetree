#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a, b;
    int bmax=-101;
    int arr[1000]={0};
    for(int i=0;i<n;i++){
        cin >> a >> b;
        if(b>bmax){
            bmax=b;
        }
        for(int j=a;j<b;j++){
            ++arr[j];
        }
    }

    int max=0;
    for(int i=0;i<bmax;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    cout << max;
    // Please write your code here.
    return 0;
}