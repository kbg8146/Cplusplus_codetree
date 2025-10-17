#include <iostream>

#define MID 50000
#define FULL 100000

using namespace std;

int main() {
    int n;
    cin >> n;

    int x;
    char dir;
    int cur= MID;
    int arr[FULL]={0};

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
    int whi=0;
    int bla=0;

    for(int i=0;i<FULL;i++){
        if(arr[i]==1){
            whi++;
        }
        else if(arr[i]==2){
            bla++;
        }
    }
    cout << whi << " " << bla;
    // Please write your code here.
    return 0;
}