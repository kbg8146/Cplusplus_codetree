#include <iostream>
#include <algorithm>

using namespace std;

int N;
int a[100], b[100], c[100];
int arr[4];


int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }
    int point = 0;int most = 0;
    for(int j=1;j<=3;j++){
        arr[j] = 1;
        for(int i=0;i<N;i++){
            swap(arr[a[i]], arr[b[i]]);
            if(arr[c[i]]){
                point++;
            }
        }
        arr[j] = 0; 
        most = max(point,most);
        point = 0;
    }
    cout << most;

    // Please write your code here.

    return 0;
}