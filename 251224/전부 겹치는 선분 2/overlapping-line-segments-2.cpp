#include <iostream>
#include <climits>
using namespace std;

int n;
int x1[100], x2[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    int left = INT_MAX; int right = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                left = min(left,x2[i]);
                right = max(right,x1[i]);
            }
            if(left<right){
                cout << "Yes";
                return 0;
            }  
        }
        
    }cout << "No";

    // Please write your code here.

    return 0;
}