#include <iostream>

#define MID 50000
#define FULL 100000

using namespace std;

int n;
int x;
char dir;
int cur = MID;
int arr[FULL]={0};
int w=0;
int b=0;

int main() {
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> x >> dir;

        if(dir=='L'){
            while(x--){
                arr[cur]=1;
                if(x) cur--;
            }
        }
        else{
            while(x--){
                arr[cur]=2;
                if(x) cur++;
            }
        }
    }
    for(int i=0;i<FULL;i++){
        if(arr[i]==1){
            w++;
        }
        else if(arr[i]==2){
            b++;
        }
    }
    cout << w << " " << b;
    // Please write your code here.
    return 0;
}