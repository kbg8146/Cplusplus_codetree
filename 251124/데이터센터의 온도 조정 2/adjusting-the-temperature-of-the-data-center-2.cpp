#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, C, G, H;
    cin >> N >> C >> G >> H;

    vector<pair<int,int>> v(N);
    for (int i = 0; i < N; i++)
        cin >> v[i].first >> v[i].second;   // Ta, Tb

    int answer = 0;

    // T는 0 ~ 100
    for (int T = 0; T <= 1000; T++) {
        int total = 0;

        for (int i = 0; i < N; i++) {
            int Ta = v[i].first;
            int Tb = v[i].second;

            if (T < Ta) total += C;
            else if (T <= Tb) total += G;
            else total += H;
        }

        answer = max(answer, total);
    }

    cout << answer;
    return 0;
}
