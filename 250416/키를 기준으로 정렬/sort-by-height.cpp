#include <iostream>
#include <algorithm>
using namespace std;

class Student {
    public:
        string name;
        int height,weight;
        
        Student(string name, int hei, int wei){
            this->name = name;
            this->height = hei;
            this->weight = wei;
        }
        Student(){}
};

bool cmp(Student a, Student b){
    return a.height < b.height;
}

Student students[10];

int main() {
    int num;
    cin >> num;
    string name;
    int height;
    int weight;

    
    for(int i=0;i<num;i++){

        cin >> name >> height >> weight;
        students[i] =Student(name,height,weight);

    }

    sort(students, students +num, cmp);

    for(int i=0;i<5;i++)
        cout << students[i].name << " " << students[i].height << " " << students[i].weight << endl;

    // Please write your code here.
    return 0;
}