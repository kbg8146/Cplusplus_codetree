#include <iostream>
using namespace std;

int score[2];
int Ascore, Bscore;
int curr_mode, mode;
int cnt;
char c;
int s;  

int main() {
    int N=0;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> c >> s;
        if(c == 'A'){
            Ascore += s;
        }
        else if(c == 'B'){
            Bscore += s;
        }
        curr_mode = mode;
        if(Ascore>Bscore){
            mode = 0;
        }
        else if(Ascore<Bscore){
            mode = 1;
        }
        else if(Ascore == Bscore){
            mode = 2;
        }
        if(curr_mode != mode) cnt++;
    }
    cout << cnt;
    
    // Please write your code here.
    return 0;
}