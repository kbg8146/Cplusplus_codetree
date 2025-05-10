#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int n;
    int cnt=0;
    int a[1010]={0};
    int big=0;
    for(int i=0;i<N;i++){
        cin >> a[i];

        if(i==0||a[i] != a[i-1]){
            if(cnt>big){
                cnt++;
                big=cnt;
            }
            cnt=0;
        }
        else{
            cnt++;
            
        }
    }


    cout << big;

    // Please write your code here.
    return 0;
}