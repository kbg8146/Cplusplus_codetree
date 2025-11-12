#include <iostream>
#include <climits>
using namespace std;

int arr[6];
int sum;
int group1, group2;

int Diff(int i, int j, int k){
    group1 = arr[i] + arr[j] + arr[k];
    group2 = sum - group1;
    return abs(group1-group2);
}

int main() {
    for(int i=0;i<6;i++){
        cin >> arr[i];
        sum += arr[i];
    }

    int least = INT_MAX;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            for(int k=j+1;k<6;k++){
                least = min(least, Diff(i,j,k));
            }
        }
    }
    cout << least;

    // Please write your code here.
    return 0;
}