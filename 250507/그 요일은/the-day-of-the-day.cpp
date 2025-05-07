#include <iostream>
#include <string>
using namespace std;

int main() {
    int num_of_days[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
    string name_of_days[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    int m1,d1,m2,d2;
    cin >> m1 >> d1 >> m2 >> d2;
    string name;
    cin >> name;

    int j=0;
    for(j=0;j<7;j++){
        if(name_of_days[j]==name){
            break;
        }
    }

    // 기준일(1월 1일)이 Mon이므로 월요일부터 시작
    int total_start_days = 0;
    for(int i=1; i<m1; i++){
        total_start_days += num_of_days[i];
    }
    total_start_days += d1 - 1;

    int total_end_days = 0;
    for(int i=1; i<m2; i++){
        total_end_days += num_of_days[i];
    }
    total_end_days += d2 - 1;

    int count = 0;
    for(int i = total_start_days; i <= total_end_days; i++){
        if(i % 7 == j){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
