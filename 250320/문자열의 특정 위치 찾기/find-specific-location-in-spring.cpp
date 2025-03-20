#include <iostream>
#include <string>
using namespace std;

int main() {

    string s;
    cin >> s;
    char alp;
    cin >> alp;
    int start_idx = -1;

    if(s.find(alp) != string::npos){
        start_idx = s.find(alp);
        cout << start_idx;
    }
    else if(s.find(alp) == string::npos){
        cout << "No";
    }
    
    // Please write your code here.
    return 0;
}