#include <iostream>

using namespace std;

int arr[101];

int main() {
    int S,N;
    cin >> N >> S;

    int sum=0;
    for(int i=0;i<N;i++){
        cin >> arr[i];
        sum += arr[i];
    }

    int near = 101;
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            int two = arr[i]+arr[j];
            near = min(near, abs(S-(sum-two)));
        }
    }
    cout << near;
    // Please write your code here.
    return 0;
}