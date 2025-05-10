#include <iostream>
using namespace std;

int main() {
    int x1,y1,x2,y2;
    int square[210][210]={0};

    int N;
    cin >> N;
    int c=1;
    int cnt=0;
    for(int i=0;i<N;i++){
        cin >> x1 >> y1 >> x2 >> y2;
        for(int j=x1+100;j<x2+100;j++){
            for(int k=y1+100;k<y2+100;k++){
                square[j][k]=c;
            }
        }
        c++;
    }
    for(int i=0;i<210;i++){
        for(int j=0;j<210;j++){
            if(square[i][j]%2==0&&square[i][j]!=0){
                cnt++;
            }
        }
    }
    cout << cnt;
    // Please write your code here.
    return 0;
}