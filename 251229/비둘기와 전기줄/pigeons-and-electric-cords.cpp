#include <iostream>

using namespace std;

int N;
int pigeon[100];
int position[100];
int total[100][100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> pigeon[i] >> position[i];
    }

    int k=0;int cnt=0;
    for(int name=0;name<10;name++){
        for(int i=0;i<N;i++){
            if(pigeon[i]==name){
                total[name][k++]=position[i];
            }            
        }
        for(int i=0;i<k-1;i++){
            if(total[name][i]!=total[name][i+1]){
                cnt++;
            }
        }
        k=0;
    }
    cout << cnt;

    return 0;
}