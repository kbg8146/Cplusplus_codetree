#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    int cnt=65;
    for(int i=0;i<N;i++){
        for(int j=0;j<=i;j++){
            cout << char(cnt);
            cnt++;
            if(char(cnt)=='['){
                cnt=65;;
            }
        }
        cout << endl;
    }
    return 0;
}