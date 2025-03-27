#include <iostream>
using namespace std;

int main() {
    int n;
    int sum=0;
    int num;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> num;
        sum += num;
    }
    string sum_str = to_string(sum);
    
    int len=sum_str.length();
    sum_str[len] = sum_str[0];

    for(int i=1;i<=len;i++){
        cout << sum_str[i];
    }
    // Please write your code here.
    return 0;
}