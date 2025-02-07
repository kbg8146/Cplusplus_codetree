#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int row=1;
    for(int i=0;i<n;i++){
        if(row%2!=0){
            for(int j=0;j<n-i;j++){
                cout << "* ";
            }
            row++; 
            cout << endl;
        }
        if(row%2==0){
            for(int k=0;k<i+1;k++){
                cout << "* ";
            }
            row++;
            cout << endl;
        }
    }
    return 0;
}
