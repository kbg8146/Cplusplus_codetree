#include <iostream>
#include <climits>

using namespace std;

int n, k;
int arr[100];

int cal(){
    int sub=0; int least = INT_MAX; 
    for(int j=1;j<=10000-k;j++){
        for(int i=0;i<n;i++){

            int min = j;
            int max = j+k;

            if(arr[i]<min){
                sub += abs(arr[i]-min);
            }
            else if(arr[i]>max){
                sub += abs(arr[i]-max);
            }
        }
        least = min(least, sub);
        sub=0;
    }
    return least;
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

     

    cout << cal();
    // Please write your code here.

    return 0;
}