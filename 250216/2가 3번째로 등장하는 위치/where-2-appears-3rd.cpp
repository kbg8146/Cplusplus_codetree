#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int arr[100]={};
    int cnt=0;
    int cnt_all=0;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
        cnt_all++;
        if(arr[i]==2){
            cnt++;
            if(cnt==3){
                cout << cnt_all;
            }
        }
    }
    return 0;
}