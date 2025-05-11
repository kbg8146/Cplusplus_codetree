#include <iostream>
#include <string>
using namespace std;

int main() {
    int N,M;
    cin >> N >> M;

    int a[2010000]={0};
    int b[2010000]={0};

    string dir;
    int step=0;
    int timeA=0;
    int timeB=0;
    int stateA=1005000;
    int stateB=1005000;
    int result=-1;
    for(int i=0;i<N;i++){
        cin >> dir >> step;
        if(dir=="R"){
            for(int k=1;k<=step;k++){
                a[stateA++]=timeA++;
            }
        }
        else if(dir=="L"){
            for(int k=1;k<=step;k++){
                a[stateA--]=timeA++;
            }
        }
        
    }
    for(int j=0;j<M;j++){
        cin >> dir>> step;

        if(dir=="R"){
            for(int k=1;k<=step;k++){
                b[stateB++]=timeB++;
            }
        }
        else if(dir=="L"){
            for(int k=1;k<=step;k++){
                b[stateB--]=timeB++;
            }
        }
    }

    for(int i=0;i<2010000;i++){
        if(a[i]==b[i]&&a[i]!=0&&b[i]!=0){
            result = a[i];
            break;
        }
    }
    cout << result;
    // Please write your code here.
    return 0;
}