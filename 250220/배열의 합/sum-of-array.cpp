#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int sum[4]={};
    int arr[4][4]={};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            sum[i]+=arr[i][j];            
        }
        cout << sum[i] << endl;
    }
    
    return 0;
}