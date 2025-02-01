#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int result=n;
    for(int i=1;i<=n;i++){
        result = result/i;
        if(result<=1){
            cout << i;
            break;
        }
    }
    return 0;
}