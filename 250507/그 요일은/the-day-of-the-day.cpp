#include <iostream>
#include <string>
using namespace std;

int main() {
    int num_of_days[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31}; // 윤년 기준
    string name_of_days[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};

    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    string start_day;
    cin >> start_day;

    // 시작 요일 인덱스
    int day_idx = 0;
    for (int i = 0; i < 7; i++) {
        if (name_of_days[i] == start_day) {
            day_idx = i;
            break;
        }
    }

    int count = 0;
    // 날짜를 하루씩 증가시키며 요일 확인
    while (true) {
        if (day_idx == 5) count++; // 토요일이면 count 증가

        if (m1 == m2 && d1 == d2) break;

        d1++;
        day_idx = (day_idx + 1) % 7;

        if (d1 > num_of_days[m1]) {
            d1 = 1;
            m1++;
        }
    }

    cout << count << endl;
    return 0;
}
