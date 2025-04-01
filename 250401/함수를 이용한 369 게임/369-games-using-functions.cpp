#include <iostream>
using namespace std;
bool IsNumber1(int n){
    while(n>0){
        if(n%10==3||n%10==6||n%10==9){
            return true;
        }
        n/=10;
    }
    return false;
}
bool IsNumber2(int n){
        return n%3==0;
}
int main() {

    int A , B;
    cin >> A >> B;
    int cnt=0;

       
    for(int i=A;i<=B;i++){
        if(IsNumber1(i)||IsNumber2(i)){
            //cout << i << " ";
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}