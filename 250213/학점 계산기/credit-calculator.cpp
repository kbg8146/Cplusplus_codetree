#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;
    int arr[10];
    double grad;
    cin >> n;
    double avg=0;
    double sum=0;
    for(int i=0;i<n;i++){
        cin >> grad;
        sum+=grad;
    }        
    avg=sum/n;
    cout << fixed;
    cout.precision(1);
    cout << avg << endl;
    if(avg>=4){
        cout << "Perfect";
    }
    else if(avg>=3){
        cout << "Good";
    }
    else{
        cout << "Poor";
    }
    return 0;
}