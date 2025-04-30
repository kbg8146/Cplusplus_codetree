#include <iostream>
using namespace std;

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}

int lcm_array(int arr[],int n){
    if(n==1) return arr[0];
    return lcm(arr[n-1],lcm_array(arr,n-1));
}
int main() {
    int n;
    cin >> n;
    int arr[11];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int result = lcm_array(arr,n);
    cout << result;
    // Please write your code here.
    return 0;
}