#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, B;
int P[1001];
int S[1001];

int main() {
    cin >> N >> B;
    for(int i=0; i<N; i++){
        cin >> P[i] >> S[i];
    }

    int answer = 0;

    for(int c=0; c<N; c++){ // 쿠폰을 적용할 학생
        vector<int> cost;
        for(int i=0; i<N; i++){
            if(i == c) cost.push_back(P[i]/2 + S[i]); // 쿠폰 적용
            else cost.push_back(P[i] + S[i]); // 일반
        }

        sort(cost.begin(), cost.end());

        int sum = 0;
        int cnt = 0;
        for(int x : cost){
            if(sum + x > B) break;
            sum += x;
            cnt++;
        }

        answer = max(answer, cnt);
    }

    cout << answer << endl;
    return 0;
}
