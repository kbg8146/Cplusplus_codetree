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
    int ans=INT_MAX;
    int xx1;
    int xx2;
    for(int i=0;i<n;i++){
        xx1=INT_MAX;
        xx2=INT_MIN;
        for(int j=0;j<n;j++){
            if(i!=j){
                xx1=min(xx1,x1[j]);
                xx2=max(xx2,x2[j]);
                //cout << "xx1: " << xx1 << " , " << "xx2: " << xx2 << endl;
            }
        }
        ans = min(ans,xx2-xx1);
        //cout << ans << endl;
    }
    cout << ans;
    // Please write your code here.

    return 0;
}