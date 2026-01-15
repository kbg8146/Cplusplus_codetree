#include <iostream>
#include <algorithm>

using namespace std;

int n;
int blocks[100];
int s1, e1;
int s2, e2;
int temp[100];
int j;

int main() {
    cin >> n;        
    for (int i = 1; i <= n; i++) {
        cin >> blocks[i];
    }
    for(int tc=0;tc<2;tc++){

        cin >> s1 >> e1;
        j=1;
        for(int i=1;i<=n;i++){
            if(s1<=i && i<=e1) continue;
            temp[j++] = blocks[i];
        }
        n = n-(e1-s1+1);
        //cout << endl;
        for(int i=1;i<=n;i++){
            blocks[i]=temp[i];
        }
    }
    cout <<n << endl;
    for(int i=1;i<=n;i++) cout << blocks[i] << endl;    
    // Please write your code here.

    return 0;
}
