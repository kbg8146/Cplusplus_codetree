#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
int arr[101];

int main() {
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    
    int maxSum = 0;
    
    // 모든 시작 위치(1~N)에 대해 시도
    for (int start = 1; start <= n; start++) {
        int sum = 0;
        int current = start;
        
        // 현재 시작 위치에서 M번 이동하며 합 계산
        for (int step = 0; step < m; step++) {
            sum += arr[current];        // 현재 위치의 값을 합계에 더함
            current = arr[current];     // 현재 위치의 값이 가리키는 위치로 이동
        }
        
        // 최댓값 갱신
        maxSum = max(maxSum, sum);
    }
    
    cout << maxSum << endl;
    
    return 0;
}