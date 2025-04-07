#include <iostream>
using namespace std;

void PrintStar(int n){
    if(n==0)
        return;
    
    PrintStar(n-1);
    cout << "HelloWorld";
    cout << endl;
}

int main() {
    int N;
    cin >> N;
    PrintStar(N);
    // Please write your code here.
    return 0;
}
