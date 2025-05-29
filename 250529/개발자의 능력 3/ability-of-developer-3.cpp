#include <iostream>
#include <climits>
#include <cstdlib>
#include <algorithm>

#define MAX_N 6

using namespace std;

int n = MAX_N;
int arr[MAX_N];

int Diff(int i, int j, int k) {
    int total_sum = 0;
    for(int l = 0; l < n; l++)
        total_sum += arr[l];
    
    // 두 번째 팀원의 합은 전체에서 첫 번째 팀원의 합을 빼주면 됩니다.
    int sum1 = arr[i] + arr[j] + arr[k];
    int sum2 = total_sum - sum1;
    return abs(sum1 - sum2);
}

int main() {
    // 입력
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    // 첫 번째 팀원을 만들어줍니다.
    int min_diff = INT_MAX;
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            for(int k = j + 1; k < n; k++)
                min_diff = min(min_diff, Diff(i, j, k));
    
    cout << min_diff;
    return 0;
}
