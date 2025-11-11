#include <iostream>

#define MAX_N 100
using namespace std;

int arr[MAX_N];

int main() {
    int N;
    cin >> N;

    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    int cnt =0;
    for(int i=0;i<N;i++){
        for(int j=i;j<N;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum += arr[k];
            }
            double avg = (double)sum / (j-i+1);
            
            bool exists = false;
            for(int k=i;k<=j;k++){
                if(avg==arr[k]){
                    exists = true;
                }
            }
            if(exists){
                cnt++;
            }
        }
    }
    cout << cnt;
    // Please write your code here.
    return 0;
}