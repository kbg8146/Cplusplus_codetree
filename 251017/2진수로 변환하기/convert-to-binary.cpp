#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[20];
    int i=0;

    while(true){
        if(N<2){
            arr[i++]=N;
            break;
        }
        arr[i++]=N%2;
        N=N/2;
    }

    for(int j=i-1;j>=0;j--){
        cout << arr[j];
    }
    // Please write your code here.
    return 0;
}