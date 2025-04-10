#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    string words[1001];
    for(int i=0;i<n;i++){
        cin >> words[i];     
    }
    sort(words,words+n);
    for(int i=0;i<n;i++)
        cout << words[i] << endl;

    // Please write your code here.
    return 0;
}