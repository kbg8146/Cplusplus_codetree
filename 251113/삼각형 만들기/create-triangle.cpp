#include <iostream>
#include <cstdlib>

#define MAX_N 100

using namespace std;

int n;
int x[MAX_N], y[MAX_N];

int area(int i, int j, int k){
    return abs((x[i]*y[j] + x[j]*y[k] + x[k]*y[i])-(x[j]*y[i] + x[k]*y[j] + x[i]*y[k]));
}

int main() {
    
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> x[i] >> y[i];
    }

    int max_area = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if((x[i]==x[j] || x[j] == x[k] || x[k] == x[i])&&
                (y[i]==y[j] || y[j]==y[k] || y[k] == y[i]))
                    max_area = max(max_area, area(i,j,k));
            }
        }
    }
    cout << max_area;

    return 0;
}