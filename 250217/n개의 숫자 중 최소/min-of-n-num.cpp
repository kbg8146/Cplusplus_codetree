#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    int arr[100];
    int cnt=0;
    int min=0;
    cin >> min;
    arr[1]=min;
    for(int i=2;i<=N;i++){
        cin >> arr[i];
        if(min>arr[i]){
            min=arr[i];
        }
    }        
    for(int i=1;i<=N;i++){
        if(min==arr[i]){
            cnt++;
        }

    }
    cout << min << " " << cnt;
    return 0;
}