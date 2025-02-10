#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    int alp=65;

    for(int i=0;i<N;i++){
        for(int j=0;j<i;j++){
            cout << "  ";
        }
        for(int j=0;j<N-i;j++){
            cout << char(alp) << " ";
            alp++;
            if(alp==91){
                alp=65;
            }
        }
        cout << endl;
    }
    return 0;
}