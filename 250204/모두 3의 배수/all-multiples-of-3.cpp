#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    bool exist =false;
    cin >> n;
    if(n%3==0){
        cin >>n;
        if(n%3==0){
            cin >> n;
            if(n%3==0){
                cin >> n;
                if(n%3==0){
                    cin >> n;
                    if(n%3==0){
                        exist = true;
                    }
                }
            }     
        }
    }      
    if(exist==true){
        cout << 1;
    }
    else if(exist==false){
        cout << 0;
    }

    return 0;
}