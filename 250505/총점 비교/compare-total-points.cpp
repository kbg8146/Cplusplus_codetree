#include <iostream>
#include <algorithm>
using namespace std;

class Point{
    public:
        string name;
        int kor, eng, math;

        Point() {}
        Point(string name, int kor ,int eng ,int math){
            this->name = name;
            this->kor = kor;
            this->eng = eng;
            this->math = math;
        }
};

bool cmp(Point a,Point b){
    return a.kor + a.eng + a.math < b.kor + b.eng + b.math;
}

int main() {
    int n;
    cin >> n;
    string name;
    int kor,eng,math;
    Point points[110];

    for(int i=0;i<n;i++){
        cin >> name >> kor >> eng >> math;
        points[i]=Point(name,kor,eng,math);
    }

    sort(points,points+n,cmp);

    for(int i=0;i<n;i++){
        cout << points[i].name << " " << points[i].kor << " " << points[i].eng << " " << points[i].math << endl;
    }
    // Please write your code here.
    return 0;
}