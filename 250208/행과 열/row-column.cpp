#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a ,b;
    cin >> a >> b;

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout << (i+1)*(j+1) << " ";
        }
        cout << endl;
    }
    return 0;
}