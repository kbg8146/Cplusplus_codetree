#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;
    int arr[100][100]={};
    int k=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){ 
            arr[i][j]=k;
            k++;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << arr[i][j] << " ";
            if(arr[i][j]%m==0){
                cout << endl;
            }
        }
    }

    return 0;
}