#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[110];
    int j;
    for(int i=0;i<N;i++){
        cin >> arr[i];
        sort(arr, arr+i+1);
        j=i+1;
        if(j%2!=0){
            cout << arr[(j/2)] << " ";
        }
    }

    // Please write your code here.
    return 0;
}