#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    int sub=0;

    int arr[10]={};
    for(int i=1;i<=N;i++){
        cin >> arr[i];
    }
    int min= arr[1]-arr[2];            
    if(min<0){
        min=-1*min;
    }
    for(int i=1;i<=N-1;i++){
        for(int j=i+1;j<=N;j++){
            sub=arr[i]-arr[j];
            if(sub<0){
                sub=-1*sub;
            }
            if(min>sub){
                min =sub;
            }
        }
    }
    cout << min;
    return 0;
}