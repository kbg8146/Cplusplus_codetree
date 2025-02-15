#include <iostream>
using namespace std;

int main() {

    int arr[10];
    int sum_2=0;
    int sum_3=0;
    int cnt=0;
    double avg;
    for(int i=1;i<=10;i++){

        cin >> arr[i];
        if(i%2==0){
            sum_2 += arr[i];
        }
        if(i%3==0){
            cnt++;
            sum_3 += arr[i];
            avg = (double)sum_3/cnt;
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << sum_2 << " " << avg;

    return 0;
}