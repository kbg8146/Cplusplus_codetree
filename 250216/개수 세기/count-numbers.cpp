#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N, M=0;
    cin >> N >> M;

    int cnt=0;
    int arr[100]={};

    for(int i=1;i<=N;i++){
        cin >> arr[i];
        if(arr[i]==M){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}