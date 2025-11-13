#include <iostream>
#include <climits>

using namespace std;

int x[101];
int y[101];

int main() {
    int N;
    cin >> N;

    for(int i=0;i<N;i++){
        cin >> x[i] >> y[i];
    }

    int least = INT_MAX;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j) continue;
            int dist = abs(x[i]-x[j])*abs(x[i]-x[j]) + abs(y[i]-y[j])*abs(y[i]-y[j]);
            //cout << abs(x[i]-x[j])*abs(x[i]-x[j]) << endl;
            least = min(least, dist);
        }
    }
    cout << least;
    // Please write your code here.
    return 0;
}