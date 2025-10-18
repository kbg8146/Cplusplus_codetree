#include <iostream>

#define OFFSET 100
#define SIZE 201

using namespace std;

int arr[201][201]={0};

int main() {

    int n;
    cin >> n;

    int x1, x2, y1, y2;

    for(int i=0;i<n;i++){
        cin >> x1 >> y1 >> x2 >> y2;

        x1 += OFFSET;
        x2 += OFFSET;
        y1 += OFFSET;
        y2 += OFFSET;

        for(int i=x1;i<x2;i++){
            for(int j=y1;j<y2;j++){
                arr[i][j]=1;
               // cout << arr[i][j];
            }
        }

    }

    int cnt=0;
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            if(arr[i][j]==1){
                cnt++;
            }
        }
    }
    cout << cnt;
    // Please write your code here.
    return 0;
}