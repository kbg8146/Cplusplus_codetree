#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;

int main() {
    int n,arr[101];
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;

    sort(arr,arr+n,greater<int>());
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";    
    // Please write your code here.
    return 0;
}