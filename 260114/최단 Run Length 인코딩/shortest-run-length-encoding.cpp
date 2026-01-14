#include <iostream>
#include <string>
#include <climits>

using namespace std;

string A;

int digits(int x){
    int d = 0;
    while(x>0){
        d++;
        x/=10;
        
    }
    return d;
}

int main() {
    cin >> A;
    
    int n=A.size();
    char temp;
    int ans=INT_MAX;

    for(int i=0;i<n;i++){
        temp = A[n-1];
        for(int j=n-1;j>=1;j--){
            A[j] = A[j-1];
        }
        A[0] = temp;
        // for(int j=0;j<n;j++){
        //     cout << A[j] << " ";
        // }
        // cout << endl;
        int cnt=0;
        int t_cnt=1;
        for(int j=0;j<n-1;j++){
            if(A[j]==A[j+1]) t_cnt++;
            else{
                cnt+=1+digits(t_cnt);
                t_cnt=1;
            }
        //    cout << cnt << " ";
        }
        cnt+=1+digits(t_cnt);
        //cout << endl;
        ans = min(ans,cnt);
    }
    cout << ans;

    return 0;
}
