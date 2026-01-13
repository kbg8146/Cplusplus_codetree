#include <iostream>

using namespace std;

int n,sum,ans;
int blocks[10000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> blocks[i];
        sum += blocks[i];
    }
    int avg = sum/n;

    for(int i=0;i<n;i++){
        if(avg<blocks[i]){
            ans+=blocks[i]-avg;
        }
    }
    cout << ans;

    return 0;
}