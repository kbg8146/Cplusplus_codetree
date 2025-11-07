#include <iostream>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

string arr;

int main() {
    cin >> arr;

    int cnt=0;
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]=='('){
            for(int j=i+1;j<arr.size();j++){
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