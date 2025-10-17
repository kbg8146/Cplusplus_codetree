#include <iostream>

#define MAX_N 100
#define MAX_R 200
#define OFFSET 100

using namespace std;

int main() {
    int n;
    cin >> n;

    int x1[MAX_N]={0};
    int x2[MAX_N]={0};

    int checked[MAX_R+1]={0};

    for(int i=0;i<n;i++){
        cin >> x1[i] >> x2[i];

        x1[i] += OFFSET;
        x2[i] += OFFSET;
    }

    for(int i=0;i<n;i++){
        for(int j=x1[i];j<x2[i];j++){
            checked[j]++;
        }
    }

    int max=0;
    for(int i=0;i<=MAX_R;i++){
        if(checked[i]>=max){
            max=checked[i];
        }
    }
    cout << max;
    // Please write your code here.
    return 0;
}