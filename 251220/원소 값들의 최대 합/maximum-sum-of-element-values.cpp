#include <iostream>

using namespace std;

int n, m;
int arr[100];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    int strat = 0, most = 0, sum = 0;
    for(int j=1;j<=n;j++){
        int pos = j;
        for(int i=0;i<m;i++){
            sum += arr[pos];
            pos = arr[pos];
        }
        most = max(sum,most);
        sum = 0;
    }

    cout << most;

    // Please write your code here.

    return 0;
}