#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    public:
        int h,w,n;

        Student() {}
        Student(int h, int w,int n){
            this->h = h;
            this->w = w;
            this->n = n;
        }

};

bool cmp(Student a, Student b){
    if(a.h>b.h){
        return a.h>b.h;
    }
    else if(a.h==b.h){
        if(a.w>b.w){
            return a.w > b.w;
        }
        else if(a.n<b.n){
            return a.n < b.n;
        }
    }
}

int main() {
    int N;
    cin >> N;

    int h,w,n;
    Student students[1010];

    for(int i=0;i<N;i++){
        cin >> h >> w;
        n=i+1;
        students[i]=Student(h,w,n);
    }
    sort(students,students+N,cmp);

    for(int i=0;i<N;i++){
        cout << students[i].h << " " << students[i].w << " " << students[i].n << endl;
    }
    // Please write your code here.
    return 0;
}