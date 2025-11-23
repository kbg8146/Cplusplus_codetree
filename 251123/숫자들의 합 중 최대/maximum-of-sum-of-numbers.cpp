#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int X, Y;
    cin >> X >> Y;

    int most=0; int sum=0; int d1,d2,d3,d4,d5;
    for(int i = X; i<=Y;i++){
        d1 = i/10000;
        d2 = i/1000%10;
        d3 = i/100%10;
        d4 = i/10%10;
        d5 = i%10;

        sum = d1+d2+d3+d4+d5;
        most = max(sum,most);
    }
    cout << most;
    // Please write your code here.
    return 0;
}