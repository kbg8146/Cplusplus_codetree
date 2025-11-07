#include <iostream>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

string arr;

int main() {
    cin >> arr;

    int cnt=0;
    for(int i=0;i<sizeof(arr);i++){
        if(arr[i]=='('){
            for(int j=i;j<sizeof(arr);j++){
                if(arr[j]==')'){
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
    // Please write your code here.
    return 0;
}