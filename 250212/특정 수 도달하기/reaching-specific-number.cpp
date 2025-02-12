#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int i=0;
    int arr[9];
    int sum=0;
    double avg=0;


    for(i=0;i<10;i++){
        cin >> arr[i];
        sum +=arr[i];

        if(arr[i]>=250){
            avg=(double)(sum-arr[i])/i;
            cout << sum-arr[i] << " " << avg;
            break;
        }
        else if(i==9&&arr[i]<250){
            avg = sum /(i+1);
            cout << sum << " " << avg;
        }

    } 
    return 0;
}