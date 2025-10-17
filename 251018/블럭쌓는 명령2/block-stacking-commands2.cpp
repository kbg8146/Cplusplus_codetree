#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    int arr[100]={0};

    int a, b;
    int cnt=0;
    for(int i=0;i<k;i++){
        cin >> a >> b;

        cnt=b-a+1;
        for(int j=0;j<cnt;j++){
            ++arr[a++];
        }
    }

    int max=0;
    for(int i=n;i>=0;i--){
        if(arr[i]>=max){
            max=arr[i];

        }
    }
    cout << max;
    // Please write your code here.
    return 0;
}