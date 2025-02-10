#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int cnt=65; 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << (char)(cnt);
            cnt++;
        }
        cout << endl;
    }
    return 0;
}