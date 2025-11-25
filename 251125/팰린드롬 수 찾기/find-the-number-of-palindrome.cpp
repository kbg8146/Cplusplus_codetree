#include <iostream>
using namespace std;

int x, y;

int main() {
    cin >> x >> y;
    int cnt = 0;
    for(int i=x;i<=y;i++){
        int first=0, second=0, third=0, fourth=0, fifth=0;
        if(i>=10 && i<100){ //두자리
            
            first = i%10;
            second = (i/10)%10;
            
            if(first == second) {
                cnt++;

            }
            
        }
        else if(i<10000){ //세자리
            
            first =i%10;
            second = (i/10)%10;
            third = (i/100)%10;

            if(first == third) {
                cnt++;

            }
            
        }
        else if(i<100000){ //네자리
            
            first = i%10;
            second = (i/10)%10;
            third = (i/100)%10;
            fourth = (i/1000)%10;

            if(first == fourth && second == third) {
                cnt++;

            }
            
        }
        else if(i<1000000){ //다섯자리
            
            
            first = i%10;
            second = (i/10)%10;
            third = (i/100)%10;
            fourth = (i/1000)%10;
            fifth = (i/10000)%10;

            if(first == fifth && second == fourth) {
                cnt++;

            }
            
        }
    }
    cout << cnt;
    // Please write your code here.
    return 0;
}