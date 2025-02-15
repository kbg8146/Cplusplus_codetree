#include <iostream>
using namespace std;

int main() {
    int arr[200];
    int sum=0;
    for(int i=0;i<100;i++){
        cin >> arr[i];
        if(arr[i]==0){
            for(int j=i-3;j<i;j++){
                sum+=arr[j];
              
            }
            cout << sum;
            break;  
        }
    }
    return 0;
}