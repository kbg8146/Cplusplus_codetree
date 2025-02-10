#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];
    int num;
    int sum=0;
    for(int i=0;i<10;i++){
        cin >> num;
        sum += num;
    }
    cout << sum;


    return 0;
}