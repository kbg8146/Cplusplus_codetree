#include <iostream>
#include <string>
using namespace std;

int main() {

    string s;
    cin >> s;
    int len = s.length();

    s.erase(1,1);
    len--;

    s.erase(len-2,1);
    len--;

    cout << s;
    // Please write your code here.
    return 0;
}