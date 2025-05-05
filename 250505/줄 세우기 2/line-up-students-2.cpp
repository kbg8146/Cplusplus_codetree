#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    public:
        int h,w,n;

        Student() {}
        Student(int h,int w,int n){
            this->h = h;
            this->w = w;
            this->n = n;
        }
};
bool cmp(Student a, Student b){
    if(a.h != b.h) return a.h<b.h;
    return a.w>b.w;
}
int main() {
    int N;
    cin >> N;
    Student students[1010];

    int h,w,n;
    for(int i=0;i<N;i++){
        cin >> h >> w;
        n=i;
        students[i]=Student(h,w,n);
    }
    sort(students,students+N,cmp);

    for(int i=0;i<N;i++){
        cout << students[i].h << " " << students.w << " " << students.n << endl;
    }
    // Please write your code here.
    return 0;
}