#include <iostream>
#include <string>
using namespace std;

int main() {

    int N;
    cin >> N;
    string dir;
    int n;
    int arr[100]={0};
    int j=50;


    for(int i=0;i<N;i++){
        cin >> n >> dir;
        for(int i=0;i<n;i++){
            if(dir=="R"){
                arr[j++]=1;
                if(i==n-1){
                    j--;
                }
            }
            else if(dir=="L"){
                arr[j--]=2;                
                if(i==n-1){
                    j++;
                }
            }
        }
    }
    int black=0;
    int white=0;
    for(int i=0;i<100;i++){
        if(arr[i]==2){
            white++;
        }
        else if(arr[i]==1){
            black++;
        }
    }

//    for(int i=0;i<30;i++){
 //       cout << arr[135+i] << " ";
//    }
//    cout << endl;
    cout << white << " " << black;
    // Please write your code here.
    return 0;
}