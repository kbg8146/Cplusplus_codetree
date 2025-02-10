#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int sum=0;
    for(int i=0;i<n;i++){
        int a, b;
        cin >> a >> b;

        for(int j=a;j<=b;j++){
            if(j%2==0){
                sum+=j;
            }
        }
        cout << sum;
        sum =0;
        cout << endl;
    }
    return 0;
}