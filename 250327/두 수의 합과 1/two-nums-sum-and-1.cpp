#include <iostream>
#include <string>
using namespace std;

int main() {

    int a,b;
    cin >> a >> b;

    int sum = a+b;
    int cnt=0;
    string sum_str = to_string(sum);

    for(int i=0; sum_str[i];i++){
        if(sum_str[i] == '1'){
            cnt++;
        }
    }
    cout << cnt;
    // Please write your code here.
    return 0;
}