#include <iostream>
#include <climits>
using namespace std;

int n;
int x1[100], x2[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    for (int i = 0; i < n; i++) { // i번째 선분을 제외해본다
        int max_start = 1;   // 시작점 중 최댓값 (문제 조건상 최소 1)
        int min_end = 100;   // 끝점 중 최솟값 (문제 조건상 최대 100)

        for (int j = 0; j < n; j++) {
            if (i == j) continue; // i번째는 제외

            max_start = max(max_start, x1[j]);
            min_end = min(min_end, x2[j]);
        }

        // 모든 j를 확인한 후, 공통 구간이 존재하는지 체크
        if (max_start <= min_end) {
            cout << "Yes";
            return 0;
        }
    }
cout << "No";
}