#include <iostream>

#define MID 50000
#define FULL 100000

using namespace std;

int main() {
    int n;
    cin >> n;

    int x;
    char dir;
    int cur= MID;
    int arr[FULL]={0};

    for(int i=0;i<n;i++){
        cin >> x >> dir;

        for(int j=0;j<x;j++){
            if(dir=='L'){
                arr[cur--]=1;
            }
            else{
                arr[cur++]=2;
            }
        }
    }
    int whi=0;
    int bla=0;

    for(int i=0;i<FULL;i++){
        if(arr[i]==1){
            whi++;
        }
        else if(arr[i]==2){
            bla++;
        }
    }
    cout << whi << " " << bla;
    // Please write your code here.
    return 0;
}