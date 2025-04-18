#include <iostream>
#include <algorithm>
#include <string>

#define MAXN 10

using namespace std;
class Student{
    public:
        string name;
        int korean;
        int english;
        int math;
        Student(string name, int korean, int english, int math){
            this->name = name;
            this->korean=korean;
            this->english=english;
            this->math = math;
        }
        Student(){}
};

bool Cmp(Student a, Student b){
    if(a.korean !=b.korean)
        return a.korean > b.korean;
    if(a.english != b.english)
        return a.english > b.english;
    return a.math > b.math;
}
Student students[MAXN];
int main() {
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        string name;
        int kor, eng, math;
        cin >> name >> kor >> eng >> math; 

        students[i]=Student(name,kor,eng,math);
    }

    sort(students, students+n,Cmp);

    for(int i=0;i<n;i++){
        cout << students[i].name << " ";
        cout << students[i].korean << " ";
        cout << students[i].english << " ";
        cout << students[i].math << endl;
    }

    // Please write your code here.
    return 0;
}