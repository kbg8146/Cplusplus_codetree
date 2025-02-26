#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int block[110]={0,};
    int n;
    int k;    
    int block_num;
    int count;

    cin >> block_num >> count;

    for(int i=0;i<count;i++){
        cin >> n >> k;
        for(int i= n;i<=k;i++){
            block[i]+=1;
        }
    }
    int answer=0;
    for(int i=1;i<=block_num;i++){
        if(answer<block[i]){
            answer=block[i];
        }
    }
    cout << answer;


    return 0;
}