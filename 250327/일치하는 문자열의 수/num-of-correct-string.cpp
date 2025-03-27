#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string A;
    cin >> A;

    string str1;
    int cnt=0;
    for(int i=0;i<n;i++){
        cin >> str1;
        if(str1 == A){
            cnt++;
        }
    }
    cout << cnt;
    // Please write your code here.
    return 0;
}