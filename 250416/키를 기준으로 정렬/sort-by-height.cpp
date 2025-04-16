#include <iostream>
#include <algorithm>
#include <string>

#define MAXN 10

using namespace std;

// 학생들의 정보를 나타내는 클래스 선언
class Student{
    public:
        string name;
        int height;
        int weight;
        Student(string name, int height, int weight) {
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
		Student(){}
};

// Custom Comparator
bool Cmp(Student a, Student b) {
    // 키를 기준으로 오름차순으로 정렬합니다.
    return a.height < b.height;
}

Student students[MAXN];

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        string name;
        int height, weight;
        cin >> name >> height >> weight;
        // Student 객체를 생성해 리스트에 추가합니다.
        students[i] = Student(name, height, weight);
    }

    // custom comparator를 활용한 정렬
    sort(students, students + n, Cmp);

    // 결과를 출력합니다.
    for (int i = 0; i < n; i++){
        cout << students[i].name << " ";
        cout << students[i].height << " ";
        cout << students[i].weight << endl;
    }

    return 0;
}
