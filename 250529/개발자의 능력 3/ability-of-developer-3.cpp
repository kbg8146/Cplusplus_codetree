#include <iostream>
#include <climits>
#include <cstdlib>
#include <algorithm>
using namespace std;

int Diff(int i,int j, int k){
    int total_sum = 0;
    for(int l=0;l<n;l++)
        total_sum += arr[l];

    int sum1 = arr[i] +arr[j] + arr[k];
    int sum2 = total_sum -sum1;
}

int main() {
    int score[10]={0};
    for(int i=1;i<=6;i++){
        cin >> score[i];
    }
    int min_diff = INT_MAX;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            for(int k = j+1;k<n;k++)
                min_diff = min(min_diff,Diff(i,j,k));
    cout << min_diff;


    // Please write your code here.
    return 0;
}