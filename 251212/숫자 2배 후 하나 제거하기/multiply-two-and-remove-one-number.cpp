#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <climits>

using namespace std;

#define MAX_N 100

int n;
int arr[MAX_N];

int Score(int removed_idx){
    int sum = 0;
    int prev = -1;

    for(int i=0;i<n;i++){
        if(i == removed_idx) continue;

        if(prev != -1)
            sum += abs(arr[i] - prev);
        
        prev = arr[i];
    }
    return sum;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min_score = INT_MAX;

    for(int i=0;i<n;i++){
        arr[i] *= 2;

        for(int j=0;j<n;j++){
            min_score = min(min_score, Score(j));
        }
        arr[i] /=2;
    }
    printf("%d", min_score);
    // Please write your code here.

    return 0;
}