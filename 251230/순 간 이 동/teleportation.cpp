#include <iostream>
using namespace std;

int A,B,x,y;
int c1, c2 ,c3;
int main() {
    cin >> A >> B >> x >> y;
    
    c1 = B-A;
    c2 = abs(A-x) + abs(B-y);
    c3 = abs(A-y) + abs(B-x);
    //cout << c1 << " " << c2 << " " << c3 << endl;
    int dist = min(c1,c2);
    dist = min(dist,c3);
    cout << dist;
    // Please write your code here.
    return 0;
}