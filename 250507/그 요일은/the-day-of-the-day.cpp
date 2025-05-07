#include <iostream>
#include <string>
using namespace std;

int main() {
    int num_of_days[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31}; // 1월~12월
    string name_of_days[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};

    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    string start_day;
    cin >> start_day;

    // 시작 요일 인덱스 구하기
    int start_day_idx = 0;
    for(int i = 0; i < 7; i++) {
        if(name_of_days[i] == start_day) {
            start_day_idx = i;
            break;
        }
    }

    // 날짜 차이를 일수로 계산
    int total_days = 0;
    if (m1 == m2) {
        total_days = d2 - d1;
    } else {
        total_days += num_of_days[m1] - d1; // 첫 달 남은 일수
        for(int m = m1 + 1; m < m2; m++) {
            total_days += num_of_days[m];
        }
        total_days += d2; // 마지막 달 일수
    }

    // total_days를 7로 나눈 몫 + 1 (해당 요일 포함 주 수)
    int result = (start_day_idx + total_days) / 7;

    cout << result << endl;
    return 0;
}
