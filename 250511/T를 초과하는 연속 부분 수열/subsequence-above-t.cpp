#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int T;
    cin >> T;
    int big=0;

    int a[1010]={0};
    int cnt=0;
    for(int i=0;i<N;i++){
        cin >> a[i];

        if(a[i]>T){
            cnt++;
            if(big<cnt){
                big=cnt;
            }
        }
        else{
            cnt=0;
        }
    }
    cout << big;

    // Please write your code here.
    return 0;
}