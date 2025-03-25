#include <iostream>
using namespace std;

void func(int n, int m){
    for(int i=1;i<10000;i++){
        if(i%n==0){
            if(i%m==0){
                cout << i;
                break;
            }
        }
    }
}
int main() {
    int n , m;
    cin >> n >> m;
    func(n,m);
    // Please write your code here.
    return 0;
}