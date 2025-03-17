#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    string arr[20];
    int cnt=0;
    char alp;
    double sum=0;
    double avg=0;

    cin >> N;
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    cin >> alp;
    for(int i=0;i<N;i++){
        if(arr[i][0]==alp){
            cnt++;
            sum+=arr[i].length();
        }
    }
    avg=sum/cnt;

    cout << cnt << " ";
    cout << fixed;
    cout.precision(2);
    cout << avg;
    // Please write your code here.
    return 0;
}