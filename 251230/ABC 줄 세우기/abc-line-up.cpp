#include <iostream>
using namespace std;
char arr_c[27];
int arr_i[27];
int N;
int main() {
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> arr_c[i];
        arr_i[i] = arr_c[i];
    }
    //cout << endl;
    int cnt=0;
    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            if(arr_i[i]>arr_i[j]){
                cnt++;
                swap(arr_i[i],arr_i[j]);
            }
        }
    }
    cout << cnt;

    return 0;
}