#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a , b , c;
    cin >> a >> b>>c;

    bool exist = true;
    for(int i =a; i<=b;i++){
        if(i%c==0){
            exist = false;
        }
    }

    if(exist==true){
        cout << "YES";
    }
    else if(exist == false){
        cout << "NO";
    }



    return 0;
}