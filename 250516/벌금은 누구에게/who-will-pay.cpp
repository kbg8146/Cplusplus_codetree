#include <iostream>
using namespace std;

int main() {
    int N,K,M;
    cin >> N >> M >> K;

    int student[N+1]={0};
    int name;
    for(int i=0;i<M;i++){
        cin >> name;
        student[name]++;
        if(student[name]==3){
            cout << name;
            return 0;
            
        }
    }
    cout << -1;
    
    // Please write your code here.
    return 0;
}
