#include <iostream>
#include <string>
using namespace std;

int main() {
    int num_of_days[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31}; // 윤년
    string name_of_days[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};

    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    string target_day;
    cin >> target_day;

    // target 요일 인덱스
    int target_idx = 0;
    for (int i = 0; i < 7; i++) {
        if (name_of_days[i] == target_day) {
            target_idx = i;
            break;
        }
    }

    // 날짜 차이 계산 (총 며칠)
    int total_days = 0;
    if (m1 == m2) {
        total_days = d2 - d1;
    } else {
        total_days += num_of_days[m1] - d1; // 시작 월 남은 일수
        for (int m = m1 + 1; m < m2; m++) {
            total_days += num_of_days[m];
        }
        total_days += d2; // 마지막 월 일수
    }
    total_days += 1; // 시작일 포함

    // 요일 반복: 월(0), 화(1), ..., 일(6)
    int count = 0;
    for (int i = 0; i < total_days; i++) {
        if (i % 7 == target_idx) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
