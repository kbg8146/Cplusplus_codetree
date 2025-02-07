#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    for(int i=0;i<(2*N+1);i++){
        for(int j=0;j<(2*N+1);j++){
            if(j%2==0||i%2==0){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}