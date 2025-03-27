#include <iostream>
#include <string>
using namespace std;

int main() {

    string A, B;
    cin >> A >> B;

    int cnt=0;

    for(int i=0;A[i];i++){
        if(A[i]==B[0]){
            cout << i;
            break;
        }
    }
    // Please write your code here.
    return 0;
}