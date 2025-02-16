#include <iostream>
using namespace std;

int main() {
    char word[6]={ 'L' , 'E' , 'B' , 'R' , 'O' , 'S'};

    char find;
    cin >> find;

    int sep=-1;

    for(int i=0;i<6;i++){
        if(word[i]==find){
            sep=0;
            cout << i;
        }
    }
    if(sep==-1){
        cout << "None";
    }
    // Please write your code here.
    return 0;
}