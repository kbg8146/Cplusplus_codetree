#include <iostream>
#include <string>
using namespace std;

string text;
string pattern;
int cnt=0;

int state=-1;

void shiftText(int len_text,int len_pattern){
    text=text.substr(1,len_text-1)+text.substr(0,1);
}

bool compare(){
    int len_text = (int)text.length();
    int len_pattern = (int)pattern.length();

    for(int i=0;i<len_pattern;i++){
        if(text[i] == pattern[i]){
            state=1;
        }
        else{
            shiftText(len_text,len_pattern);
            cnt++;
            i=-1;
            state=-1;
        }
        if(cnt>len_text){
            break;
        }
    }
    if(state==1){
        return true;
    }
    else{
        return false;
    }
    
}

int main() {

    cin >> text >> pattern;

    if(compare()){
        cout << cnt;        
    }
    else{
        cout << "-1";
    }

    // Please write your code here.
    return 0;
}