#include <iostream>
#include <climits>
using namespace std;

int arr[101];

int main() {
    int N,H,T;
    cin >> N >> H >> T;

    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    int least = INT_MAX;
    for(int i=0;i<N-T+1;i++){
        int sum = 0;
        for(int j=i;j<i+T;j++){
            sum+=abs(H-arr[j]);
        }
        least = min(least, sum);

    }
    cout << least;
    // Please write your code here.
    return 0;
}