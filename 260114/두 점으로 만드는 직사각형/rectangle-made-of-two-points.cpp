#include <iostream>

using namespace std;

int x1, y1, x2, y2;
int a1, b1, a2, b2;

int xx1,yy1,xx2,yy2;

int main() {
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> a1 >> b1 >> a2 >> b2;

    // Please write your code here.
    if(x1<=a1) xx1 = x1;
    else xx1 = a1;

    if(y1<=b1) yy1 = y1;
    else yy1 = b1;

    if(x2>=a2) xx2 = x2;
    else xx2 = a2;

    if(y2>=b2) yy2 = y2;
    else yy2 = b2;

    cout << (yy2-yy1)*(xx2-xx1);

    return 0;
}