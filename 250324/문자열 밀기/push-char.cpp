#include <iostream>
#include <string>
using namespace std;

int main() {

    string s;
    cin >> s;

    s = s.substr(1) + s.substr(0,1);
    cout << s;
    // Please write your code here.
    return 0;
}