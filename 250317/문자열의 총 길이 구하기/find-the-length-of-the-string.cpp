#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[10];
    int num=0;
    for(int i=0;i<10;i++){
        cin >> arr[i];
    }
    for(int i=0;i<10;i++){
        num+=arr[i].length();
    }
    cout << num;

    

    // Please write your code here.
    return 0;
}