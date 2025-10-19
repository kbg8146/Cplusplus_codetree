#include <iostream>

#define OFFSET 100
#define bound 201

using namespace std;

int n;
int x1, x2, y1,y2;
int arr[bound][bound]={0};

int main() {
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> x1 >> y1 >> x2 >> y2;

        x1 += OFFSET;
        x2 += OFFSET;
        y1 += OFFSET;
        y2 += OFFSET;

        for(int j=x1; j<x2;j++){
            for(int k=y1; k<y2; k++){
                arr[j][k]=i;
            }
        }
    }
    int cnt=0;
    for(int i=0;i<bound;i++){
        for(int j=0;j<bound;j++){
            if(arr[i][j]%2==0 && arr[i][j]!=0){
                cnt++;
            }            
        }
    }
    cout << cnt;
    // Please write your code here.
    return 0;
}