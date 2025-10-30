#include <iostream>

#define MAX 100
using namespace std;

int n,m,k;
int student[MAX+1];
int main() {

    cin >> n >> m >> k;
    int num;
    for(int i=0;i<m;i++){
        cin >> num;
        student[num]++;
    }

    int ans=-1;
    for(int i=1;i<=n;i++){
        if(student[i]>=k){
            ans = i;
            break;
        }
    }
    cout << ans;
    // Please write your code here.
    return 0;
}