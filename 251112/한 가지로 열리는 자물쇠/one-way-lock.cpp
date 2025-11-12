#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int a,b,c;
    cin >> a >> b >> c;

    int cnt = 0;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            for(int k=1;k<=N;k++){
                if(abs(i-a) <= 2 || abs(j-b) <= 2 || abs(k-c) <= 2){
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
    // Please write your code here.
    return 0;
}