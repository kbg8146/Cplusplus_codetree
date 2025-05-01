#include <iostream>
#include <string>
using namespace std;

class Agent{
    public:
        string name;
        int point;

        Agent(string name=" ",int point=0){
            this->name = name;
            this->point = point;
        }
};

int main() {

    Agent agents[5];

    for(int i=0;i<5;i++){
        string name;
        int point;
        cin >> name >> point;
        agents[i] = Agent(name,point);
    }
    int standard_point =101;
    int standard_num=0;
    for(int i=0;i<5;i++){
        if(agents[i].point<standard_point){
            standard_num=i;
            standard_point=agents[i].point;
        }
    }
    cout << agents[standard_num].name << " " << agents[standard_num].point;



    // Please write your code here.
    return 0;
}
