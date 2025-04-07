#include <iostream>
using namespace std;

void PrintStar1(int n){
    if(n==0){
        return;
    }
    for(int i=0;i<n;i++){
        cout << "* ";    
    }
    cout << endl;
    PrintStar1(n-1);
}
void PrintStar2(int n){
    if(n==0){
        return;
    }
    PrintStar2(n-1);
    for(int i=0;i<n;i++){
        cout << "* ";
    }
    cout << endl;
}


int main() {
    int num=0;
    cin >> num;
    PrintStar1(num);
    PrintStar2(num);
    // Please write your code here.
    return 0;
}