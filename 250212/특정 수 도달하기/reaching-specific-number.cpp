#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[9];
    int n=0;
    int sum=0;
    double avg=0;
    for(int i=0;i<10;i++){
        cin >> arr[i];
        sum+=arr[i];        
        if(i<9){
            if(arr[i]>=250){   
                avg=(double)(sum-arr[i])/i;
                cout << sum-arr[i] << " " << avg;
                break;
            }
        }
        if(i==9){
            if(arr[i]>=250){   
                avg=(double)(sum-arr[i])/i;
                cout << sum-arr[i] << " " << avg;
                break;
            }
            avg=(double)sum/10;
            cout << sum << " " << avg;
            break;
        }
        

    }
    return 0;
}