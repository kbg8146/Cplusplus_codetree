#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;

    bool yes = false;
    for(int i=a;i<=b;i++){
        if(i%c==0){
            yes = true;
            break;
        }
    }
    if(yes==false){
        cout << "NO";
    }
    else if(yes==true){
        cout << "YES";
    }

    return 0;
}