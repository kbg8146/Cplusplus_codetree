#include <iostream>
using namespace std;

void PrintRect(int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << "1";
        }
        cout << endl;
    }
}
int main() {
    int row_num, col_num;
    cin >> row_num >> col_num;

    PrintRect(row_num, col_num);
    // Please write your code here.
    return 0;
}