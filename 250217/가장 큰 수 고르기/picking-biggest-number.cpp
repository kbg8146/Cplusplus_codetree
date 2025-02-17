#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int num1 ,num2;
    cin >> num1;    
    for(int i=0;i<9;i++){
        cin >> num2;
        if(num1<num2){
            num1=num2;
        }
    }
    cout << num1;
    return 0;
}