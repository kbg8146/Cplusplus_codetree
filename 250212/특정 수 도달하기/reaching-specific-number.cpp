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
        if(i<9){
            if(arr[i]>=250){   
                if(i==0){
                    sum+=arr[i];
                } 
                avg=(double)sum/i;
                cout << sum << " " << avg;
                break;
            }
        }
        sum+=arr[i];
        if(i==9){
            avg=(double)sum/(i+1);
            cout << sum << " " << avg;
            break;
        }
        

    }
    return 0;
}