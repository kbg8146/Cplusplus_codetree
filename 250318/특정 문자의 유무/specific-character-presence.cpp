#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string word;

    cin >> word;
    int length=word.length();
    bool ee = false;
    bool ab = false;

    for(int i=0;i<length;i++){
        if(word[i]=='e'&&word[i+1]=='e'){
            ee = true;
        }
        if(word[i]=='a'&&word[i+1]=='b'){
            ab = true;
        }
    }
    if(ee ==true){
        cout << "Yes ";
    }
    else if (ee ==false){
        cout << "No ";
    }
    if(ab ==true){
        cout << "Yes ";
    }
    else if (ab ==false){
        cout << "No ";
    }
    // Please write your code here.
    return 0;
}