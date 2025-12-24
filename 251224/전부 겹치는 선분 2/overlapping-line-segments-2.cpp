#include <iostream>
#include <climits>
#include <string>
using namespace std;

int n;
int x1[100], x2[100];
bool ans=0;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }
    int big=INT_MIN; int small = INT_MAX;
    for(int skip=0;skip<n;skip++){
        for(int i=0;i<n;i++){
            if(i==skip) continue;

            big = max(big, x1[i]);
            small = min(small, x2[i]);

            if(big<small) {
                ans = 1;
            }

        }
    }
    if(ans==1)
        cout << "Yes";
    else
        cout << "No";
    // Please write your code here.

    return 0;
}