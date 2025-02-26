#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[210][210]={0};
    int N;
    cin >> N;

    int x1,y1,x2,y2;

    for(int k=1;k<=N;k++){
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i=x1+100;i<x2+100;i++){
            for(int j=y1+100;j<y2+100;j++){
                arr[i][j]=1;
            }
        }
    }

    int cnt=0;

    for(int i=0;i<210;i++){
        for(int j=0; j<210;j++){
            if(arr[i][j]==1){
                cnt++;
            }
        }
    }
    cout << cnt;

    return 0;
}