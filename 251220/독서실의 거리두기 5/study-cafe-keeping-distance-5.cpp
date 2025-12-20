#include <iostream>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

int N;
string seat;

int MinDist(){
    int min_dist = N;

    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(seat[i]=='1' && seat[j]=='1'){
                min_dist = min(min_dist,j-i);
            }
        }        
    }
    return min_dist;
}

int main() {
    cin >> N;
    cin >> seat;

    int most = 0;
    for(int i=0;i<N;i++){
        if(seat[i]=='0'){
            seat[i] = '1';
            most = max(most,MinDist());
            seat[i] = '0';
        }
        
    }
    cout << most;
    // Please write your code here.

    return 0;
}