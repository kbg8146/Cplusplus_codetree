#include <iostream>
#include <climits>
#include <cstdlib>
#include <algorithm>
using namespace std;

#define MAX_N 5

int arr[MAX_N];
int total_sum=0;
int diff_ans = INT_MAX;

int Diff(int i,int j,int k){
    int sum1 = arr[i];
    int sum2 = arr[j] + arr[k];
    int sum3 = total_sum - sum1 - sum2;

    if(sum1!= sum2 && sum2 != sum3 && sum1 != sum3)
        return max(max(sum1,sum2),sum3)-min(min(sum1,sum2),sum3);
    else
        return INT_MAX;
}

int main() {
    for(int i=0;i<5;i++){
        cin >> arr[i];
    }

    for(int i=0;i<5;i++){
        total_sum += arr[i];
    }

    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            for(int k=0;k<5;k++)
                diff_ans = min(diff_ans,Diff(i,j,k));

    if(diff_ans==INT_MAX)
        cout << -1;
    else
        cout << diff_ans;

    // Please write your code here.
    return 0;
}