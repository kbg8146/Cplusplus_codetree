#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int num = s.length();
    num = num-2;
    s[1] = 'a';
    s[num] = 'a';

    cout << s;
    // Please write your code here.
    return 0;
}