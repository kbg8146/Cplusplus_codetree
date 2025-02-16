#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[11]={};
    int count_arr[11]={};

    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    for(int i=1;i<=n;i++){
        count_arr[arr[i]]++;
    }
    for(int i=1;i<=9;i++){
        cout << count_arr[i] << endl;
    }
    return 0;
}