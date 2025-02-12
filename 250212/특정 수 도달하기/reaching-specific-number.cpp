#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int i=0;
    int arr[9];
    int sum=0;
    double avg=0.0;
    int cnt=0;

    for(i=0;i<10;i++){
        cin >> arr[i];
    } 
    for(i=0;i<10;i++){
        if(arr[i]>=250){
            break;
        }
        sum += arr[i];
        cnt++;
    }

    avg = (double)sum/cnt;

    cout << fixed;
    cout.precision(1);
    cout << sum << " " << avg;
    return 0;
}