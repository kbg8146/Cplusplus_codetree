#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string arr1;
    string arr2;

    cin >> arr1 >> arr2;

    string a = arr1+arr2;
    string b = arr2+arr1;
    if(a==b){
        cout << "true";
    }
    else{
        cout << "false";
    }

    return 0;
}