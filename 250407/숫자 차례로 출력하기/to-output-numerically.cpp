#include <iostream>
using namespace std;
int i=1;

void PrintNumber1(int n){
    if(n==0)
        return;
    PrintNumber1(n-1);
    cout << n << " ";
}
void PrintNumber2(int n){
    if(n==0)
        return;
    cout << n << " ";
    PrintNumber2(n-1);
}

int main() {
    int n=0;
    cin >> n;
    PrintNumber1(n);
    cout << endl;
    PrintNumber2(n);
    // Please write your code here.
    return 0;
}