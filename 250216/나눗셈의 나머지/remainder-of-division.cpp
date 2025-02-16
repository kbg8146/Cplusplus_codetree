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
        arr[a%b]++;        
        a=a/b;
        if(a<=1){
            break;
        }       
    }
    for(int j=0;j<=9;j++){
        result += arr[j]*arr[j];
    }
    cout << result;
    return 0;
}