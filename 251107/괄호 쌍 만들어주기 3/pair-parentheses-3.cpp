#include <iostream>
#include <string>
using namespace std;

string arr;

int main() {
    cin >> arr;

    int n = (int) arr.size();

    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]=='(' && arr[j]==')'){
                cnt++;
            }
        }
    }
    cout << cnt;
    // Please write your code here.
    return 0;
}