#include <iostream>
#include <string>
using namespace std;

string opposite(string &word){

    int length = word.length();
    for(int i=0;i<=length/2-1;i++){
        char temp = word[i];
        word[i]=word[length-1-i];
        word[length-1-i]=temp;
    }
    return word;
}

bool palindrome(string &word){
    string s=word;
    if(s==opposite(word)){
        return true;
    }
    else{
        return false;        
    }

}

int main() {
    string word;
    cin >> word;

    if(palindrome(word))
        cout << "Yes";
    else
        cout << "No";
    // Please write your code here.
    return 0;
}