#include <iostream>
using namespace std;

int arr[25][25];

int main() {
    int N;
    cin >> N;
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> arr[i][j];
        }
    }

    int most=0;
    for(int i=0;i<N;i++){
        int sum=0;
        for(int j=0;j<N-2;j++){
            sum = arr[i][j]+arr[i][j+1]+arr[i][j+2];
        }
        most = max(most, sum);
    }
    cout << most;
    // Please write your code here.
    return 0;
}