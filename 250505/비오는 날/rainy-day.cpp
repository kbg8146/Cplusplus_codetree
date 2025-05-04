#include <iostream>
#include <string>
using namespace std;

class Weather{
    public:
        string date;
        string day;
        string weath;

        Weather(string date, string day, string weath){
            this-> date = date;
            this-> day = day;
            this->weath = weath;
        }
        Weather(){}
};



int main() {
    Weather weathers[110];

    int n=0;
    string date;
    string day;
    string weath;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> date >> day >> weath;
        weathers[i]=Weather(date,day,weath);
    }
    string standate="9999-12-31";
    int stand=-1;
    for(int i=0;i<n;i++){
        if(weathers[i].weath=="Rain"){
            if(weathers[i].date < standate){
                standate=weathers[i].date;
                stand=i;
            }
        }
    }

    cout << weathers[stand].date << " "<< weathers[stand].day << " " << weathers[stand].weath;


    // Please write your code here.
    return 0;
}