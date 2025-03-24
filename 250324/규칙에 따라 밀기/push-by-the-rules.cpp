#include <iostream>
using namespace std;

int main() {
    

    string str;
    cin >> str;
    string move;
    cin >> move;
    int len = move.length();
    int len_str = str.length();

    for(int i=0;i<len;i++){
        if(move[i] == 'L'){
            str=str.substr(1)+str.substr(0,1);
        }
        else if(move[i] == 'R'){
            str=str.substr(len_str-1,1)+str.substr(0,len_str-1);
        }    
    }
    cout << str;
    // Please write your code here.
    return 0;
}