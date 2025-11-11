#include <iostream>
using namespace std;

int arr[110];

int main() {

    int N, K;
    cin >> N >> K;

    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    int most = 0;
    for(int i=0;i<=N-K;i++){
        int sum = 0;
        for(int j=0;j<K;j++){
            sum += arr[i+j];
        }
        most = max(sum,most);
    }
    cout << most;


    // Please write your code here.
    return 0;
}