#include <iostream>
using namespace std;

int arr[10000];

int main() {

    int N, K;
    cin >> N >> K;

    for(int i=0;i<N;i++){
        int pos; char alp;
        cin >> pos >> alp;

        if(alp == 'G'){
            arr[pos]=1;
        }
        else
            arr[pos]=2;
    }
    int most = 0;
    for(int i=1;i<=N-K+1;i++){
        int sum = 0;
        for(int j=i;j<=i+K;j++){
            sum += arr[j];
        }
        most = max(most,sum);

    }
    cout << most;
    // Please write your code here.
    return 0;
}