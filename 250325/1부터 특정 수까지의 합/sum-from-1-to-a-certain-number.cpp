#include <iostream>
using namespace std;

int Add(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum/10;
}

int main() {
    int n;
    cin >> n;

    int total_sum = Add(n);
    cout << total_sum;
    // Please write your code here.
    return 0;
}