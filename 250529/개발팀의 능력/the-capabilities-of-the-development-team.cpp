#include <iostream>
#include <climits>
#include <cstdlib>
#include <algorithm>

using namespace std;

int arr[7] = {0}; // 전역 배열

int Diff(int i, int j, int k, int l) {
    int total_sum = 0;
    for (int idx = 0; idx < 5; idx++) {
        total_sum += arr[idx];
    }

    int sum1 = arr[i] + arr[j];
    int sum2 = arr[k] + arr[l];
    
    // 나머지 하나는 자동으로 결정
    int sum3 = total_sum - sum1 - sum2;

    // 팀 능력치가 서로 달라야 함
    if (sum1 == sum2 || sum1 == sum3 || sum2 == sum3) return INT_MAX;

    // 최대-최소 차이를 반환
    int max_sum = max({sum1, sum2, sum3});
    int min_sum = min({sum1, sum2, sum3});
    return max_sum - min_sum;
}

int main() {
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int min_diff = INT_MAX;

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            for (int k = 0; k < 5; k++) {
                if (k == i || k == j) continue;
                for (int l = k + 1; l < 5; l++) {
                    if (l == i || l == j) continue;
                    min_diff = min(min_diff, Diff(i, j, k, l));
                }
            }
        }
    }

    if (min_diff == INT_MAX) {
        cout << -1; // 조건을 만족하는 조합이 없는 경우
    } else {
        cout << min_diff;
    }

    return 0;
}
