#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr1[10][10]={};
    int arr2[10][10]={};
    int N,M;
    cin >> N >> M;

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin >> arr1[i][j];
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin >> arr2[i][j];
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(arr1[i][j]==arr2[i][j]){
                cout << "0 ";
            }
            else{
                cout << "1 ";
            }
        }
        cout << endl;
    }
    return 0;
}