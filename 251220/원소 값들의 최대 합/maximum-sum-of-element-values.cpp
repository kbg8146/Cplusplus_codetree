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
    
    // 1번 위치에서 시작해서 M번 이동하며 값을 더함
    int sum = 0;
    int current = 1;
    
    for (int step = 0; step < m; step++) {
        sum += arr[current];        // 현재 위치의 값을 합계에 더함
        current = arr[current];     // 현재 위치의 값이 가리키는 위치로 이동
    }
    
    cout << sum << endl;
    
    return 0;
}
