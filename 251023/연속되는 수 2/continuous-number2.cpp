#include <iostream>

using namespace std;

int N;
int arr[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int cnt=1;
    int tmp=arr[0];
    int result=0;
    for(int i=1;i<N-1;i++){
        if(arr[i]==tmp){
            cnt++;
        }
        else{
            cnt=1;
        }
        if(cnt>=result){
            result=cnt;
        }
        tmp=arr[i];
    }
    cout << result;

    // Please write your code here.

    return 0;
}