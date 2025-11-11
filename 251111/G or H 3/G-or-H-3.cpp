#include <iostream>
using namespace std;

char arr[10100];

int main() {

    int N, K;
    cin >> N >> K;

    for(int i=0;i<N;i++){
        int pos; char alp;
        cin >> pos >> alp;

        arr[pos] = alp;
    }
    int most = 0;
    for(int i=1;i<=N-K+1;i++){
        int sum = 0;
        for(int j=i;j<=i+K;j++){
            if(arr[j]=='G'){
                sum+=1;
            }
            else if(arr[j] == 'H'){
                sum+=2;
            }
            else{
                continue;
            }
        }
        most = max(most,sum);
        cout << most;
    }

    // Please write your code here.
    return 0;
}