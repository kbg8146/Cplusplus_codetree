#include <iostream>
using namespace std;

bool yoonYear(int n){
    if(n%100==0 && n%400!=0){
        return false;
    }
    if(n%4==0){
        return true;
    }
    return false;
}

int main() {
    int year=0;
    cin >> year;
    if(yoonYear(year)){
        cout << "true";
    }
    else{
        cout << "false";
    }

    // Please write your code here.
    return 0;
}