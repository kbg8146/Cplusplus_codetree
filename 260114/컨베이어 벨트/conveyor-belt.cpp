#include <iostream>

using namespace std;

int n, t;
int u[200];
int d[200];

int main() {
    cin >> n >> t;

    for (int i = 0; i < n; i++) cin >> u[i];

    for (int i = n; i < 2*n; i++) cin >> u[i];


    int temp=0;
    for(int i=0;i<t;i++){
        temp= u[2*n-1];
        for(int j=2*n-1;j>=0;j--){
            u[j] = u[j-1];
        }
        u[0] = temp;
        //cout << u[0] << endl;
    }

    for (int i = 0; i < n; i++) cout << u[i] << " ";
    cout << endl;
    for (int i = n; i < 2*n; i++) cout << u[i] << " ";
    // Please write your code here.

    return 0;
}
