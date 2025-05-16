#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    //cout << N << " " << M << endl;
    int A[10004]={0};
    int B[10004]={0};
    int Av=0;
    int At=0;
    int Bv=0;
    int Bt=0;
    int timeA=1;
    for(int i=0;i<N;i++){
        cin >> Av >> At;
        for(int j=1;j<=At;j++){
            A[timeA++]=Av;
           // cout << Av << " ";
        }
    }
    int timeB=1;
    //cout << endl;
    for(int i=0;i<M;i++){
        cin >> Bv >> Bt;
        for(int j=1;j<=Bt;j++){
            B[timeB++]=Bv;
            //cout << Bv << " ";
        }
    }
    //cout << endl;
    int cnt=0;
    int sumA=0;
    int sumB=0;
    int compare[10004]={0};
    for(int i=1;i<10004;i++){
        sumA+=A[i];
        sumB+=B[i];

        if(sumA>sumB){
            compare[i]=1;
        }
        else if(sumA<sumB){
            compare[i]=2;
        }
        else{
            compare[i]=0;
        }
        //cout << sumA << " + " << A[i] << endl;
        
        if(compare[i]!=compare[i-1] /*&& compare[i]!=0*/){
            cnt++;
        }
    }
    cout << cnt;
    // Please write your code here.
    return 0;
}