#include <iostream>

#define N 3
#define MAX_R 2000
#define OFFSET 1000

using namespace std;

int x1[N], y1[N];
int x2[N], y2[N];

int checked[MAX_R + 1][MAX_R + 1];

int main() {
    // 입력
    for(int i = 0; i < N; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        
        // OFFSET을 더해줍니다.
        x1[i] += OFFSET;
        y1[i] += OFFSET;
        x2[i] += OFFSET;
        y2[i] += OFFSET;
    }
    
    // 직사각형에 주어진 순으로 1, 2, 3 번호를 붙여줍니다.
    // 격자 단위로 진행하는 문제이므로
    // x2, y2에 등호가 들어가지 않음에 유의합니다.
    for(int i = 0; i < N; i++)
        for(int x = x1[i]; x < x2[i]; x++)
            for(int y = y1[i]; y < y2[i]; y++)
                checked[x][y] = i + 1;
    
    // 1, 2, 3 순으로 붙였는데도
    // 아직 숫자 1, 2로 남아있는 영역의 넓이를 구합니다.
    int area = 0;
    for(int x = 0; x <= MAX_R; x++)
        for(int y = 0; y <= MAX_R; y++)
            if(checked[x][y] == 1 || checked[x][y] == 2)
                area++;
    
    cout << area;
    return 0;
}
