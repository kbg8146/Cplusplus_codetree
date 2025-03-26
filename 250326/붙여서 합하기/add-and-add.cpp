#include <iostream>
#include <string>
using namespace std;

int main() {

    string a;
    string b;
    string str1;
    string str2;

    cin >> a >> b;

    str1 = a+b;
    str2 = b+a;

    int str1_int = stoi(str1);
    int str2_int = stoi(str2);

    cout << str1_int + str2_int;
    // Please write your code here.
    return 0;
}