#include <iostream>
using namespace std;

int seq[101];

int sum(int a1,int a2){
    int sum=0;
    for(int i=a1;i<=a2;i++){
        sum+=seq[i];
    }
    return sum;
}

int main() {
    int N,M;
    int a1, a2;
    cin >> N >> M;
    
    for(int i=1;i<=N;i++){
        cin >> seq[i];
    }
    for(int i=0;i<M;i++){
        cin >> a1 >> a2;

        cout << sum(a1,a2) << endl;
    }
 

    // Please write your code here.
    return 0;
}