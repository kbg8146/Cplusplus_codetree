#include <iostream>
using namespace std;

void PrintNLines(int n){
    for(int i=0;i<n;i++){
        cout << "12345^&*()_";
        cout << endl;
    }
}
int main() {
    int row_num;
    cin >> row_num;

    PrintNLines(row_num);
    // Please write your code here.
    return 0;
}