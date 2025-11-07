#include <iostream>
#include <climits>
#include <algorithm>
#include <cstdlib>
using namespace std;

int arr[101];

int main() {
    int N;
    cin >> N;

    for(int i=1;i<=N;i++){
        cin >> arr[i];
    }

    int dist=0,least=100000;
    for(int i=1;i<=N;i++){
        dist=0;
        for(int j=1;j<=N;j++){
            dist+=abs(i-j)*arr[j];
        }
        if(dist<=least){
            least = dist;
        }
    }
    cout << least;

    // Please write your code here.
    return 0;
}