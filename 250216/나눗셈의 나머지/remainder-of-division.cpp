#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin >> a >> b;
    int i;
    int arr[1000]={};

    int result =0;

    for(i=0;i<1000;i++){
 
        if(a<=1){

            break;
        }       
        arr[a%b]++;        
        a=a/b;
    }
    for(int j=0;j<=i;j++){
        result += arr[j]*arr[j];
    }
    cout << result;
    return 0;
}