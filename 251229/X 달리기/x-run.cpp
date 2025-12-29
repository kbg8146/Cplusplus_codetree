#include <iostream>

using namespace std;

int main() {
    int X;
    cin >> X;

    int v = 1;
    int dist = 0;
    int cnt = 0;

    while (dist < X) {
        cnt++;        // 시간(초) 증가
        dist += v;    // 현재 속도만큼 이동

        //if (dist >= X) break; // 목표 도달 시 종료

        // [핵심 수정] 다음 초에 속도를 결정하는 로직
        // 가속했을 때(v+1) 나중에 속도를 1까지 줄이며 멈출 수 있는지 확인
        // v+1에서 1까지 줄어드는 데 필요한 최소 거리: (v+1) * (v+2) / 2
        if (dist + (v + 1) * (v + 2) / 2 <= X) {
            v++; // 가속 가능
        } 
        // 현재 속도(v)를 유지했을 때 멈출 수 있는지 확인
        else if (dist + v * (v + 1) / 2 <= X) {
            // v 유지 (아무것도 안 함)
        } 
        else {
            v--; // 감속해야 함
            if (v < 1) v = 1; // 최소 속도는 1
        }

        // 과정을 보고 싶다면 아래 주석 해제
        // cout << dist << "(" << v << ") ";
    }

    cout << cnt << endl;

    return 0;
}