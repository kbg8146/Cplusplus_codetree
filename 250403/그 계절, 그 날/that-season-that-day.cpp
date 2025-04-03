#include <iostream>
#include <string>
using namespace std;

bool leapYear(int Y){
    if(Y%4==0 && Y%100==0 && Y%400==0)
        return true;
    if(Y%4==0)
        if(Y%100==0)
            return false;
        return true;
}

bool exist(int Y,int M,int D){
    if(leapYear(Y)){
        if(M==1|| M==3||M==5||M==7||M==8){
            if(D<=31){
                return true;
            }
        }
        else if(M==4||M==6||M==9||M==11){
            if(D<=30){
                return true;
            }
        }
        else{
            if(D<=29){
                return true;
            }
        }
        return false;
    }
    else{
        if(M==1||M==3||M==5||M==7||M==8){
            if(D<=31){
                return true;
            }
        }
        else if(M==2||M==4||M==6||M==9||M==11){
            if(D<=30){
                return true;
            }
        }
        return false;
    }

}

string season(int M){
    string season;
    if(M==12|| M==1 || M==2){
        season = "Winter";
    }
    else if(M==3 || M==4 || M== 5){
        season = "Spring";
    }
    else if(M==6 || M==7 || M==8){
        season = "Summer";
    }
    else{
        season = "Fall";
    }
    return season;
}

int main() {
    int Y, M, D;
    cin >> Y >> M >> D;
    if(exist(Y,M,D)){
        cout << season(M);
    }
    else
        cout << "-1";
    // Please write your code here.
    return 0;
}