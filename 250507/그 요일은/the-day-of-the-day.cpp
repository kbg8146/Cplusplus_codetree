#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int num_of_days[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
    string name_of_days[8] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    int m1,d1,m2,d2;
    cin >> m1 >> d1 >> m2 >> d2;
    string name;
    cin >> name;

    int N=0;
    int j=0;
    for(j=0;j<8;j++){
        if(name_of_days[j]==name){
            break;
        }
    }

    int cnt=-j;

    while(1){
        d1++;
        cnt++;
        //cout << m1<< " " << d1 << " " << cnt << endl;        
        if(cnt==7){
            cnt=0;
            N++;
        }
        if(m1==m2&&d1==d2){
            cout << N+1;
            return 0;
        }
        if(num_of_days[m1]==d1){
            m1++;
            d1=0;
        }
    }
    
    return 0;
}