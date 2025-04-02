#include <iostream>
using namespace std;

void even(int *arr,int i){
    arr[i]=arr[i]/2;
}

int main() {
    int N;
    cin >> N;

    int arr[50];
    for(int i=0;i<N;i++){
        cin >> arr[i];
        if(arr[i]%2==0){
            even(arr,i);
            cout << arr[i] << " ";
        }
        else if(arr[i]%2!=0){
            cout << arr[i] << " ";
        }
    }
    // Please write your code here.
    return 0;
}