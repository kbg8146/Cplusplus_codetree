#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    for(int i=0;i<N;i++){
        for(int j=0;j<=i;j++){
            cout << i+1 << " ";
        }
        cout << endl;
    }
    return 0;
}