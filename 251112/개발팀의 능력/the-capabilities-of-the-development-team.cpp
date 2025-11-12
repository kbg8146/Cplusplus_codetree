#include <iostream>
#include <climits>
using namespace std;

int arr[5];
int sum, group1, group2, group3,tmp;

int Diff(int i, int j, int k){
    group1 = arr[i]+arr[j];
    group2 = arr[k];
    group3 = sum - group1 - group2;

    if(group1 == group2 && group2 == group3){
        return -1;
    }
    tmp = min(group1, group2);
    int least = min(tmp, group3);
    tmp = max(group1,group2);
    int most = max(tmp,group3);
    return abs(most-least);
}


int main() {
    for(int i=0;i<5;i++){
        cin >> arr[i];
        sum += arr[i];
    }

    int least = INT_MAX;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            for(int k=j+1;k<5;k++){
                least = min(least,Diff(i,j,k));
            }
        }
    }
    cout << least;
    // Please write your code here.
    return 0;
}