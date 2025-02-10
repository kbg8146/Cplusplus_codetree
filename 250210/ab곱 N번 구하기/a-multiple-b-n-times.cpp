#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    int product=1;

    for(int i=0;i<N;i++){
        int a ,b;
        cin >> a >> b;

        for(int j=a;j<=b;j++){
            product*=j;
        }
        cout << product << endl;
        product =1;
    }
    return 0;
}