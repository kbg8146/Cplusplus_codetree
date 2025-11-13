#include <iostream>
#include <climits>
using namespace std;

int arr[40001];
int data[101][3];

int main() {

    int N;
    cin >> N;

    for(int i=0;i<N;i++){
        cin >> data[i][0];
        cin >> data[i][1];
    } 


    int ans=INT_MAX;

    for(int c=0;c<N;c++){
        int min_x = INT_MAX;
        int min_y = INT_MAX;
        int max_x = 0;
        int max_y = 0;
        for(int i=0;i<N;i++){
            if(c!=i){
                min_x = min(min_x,data[i][0]);
                min_y = min(min_y,data[i][1]);
                max_x = max(max_x,data[i][0]);
                max_y = max(max_y,data[i][1]);
                //cout << data[i][0] << " " << data[i][1] << endl;
            }
        }
        //cout << min_x << " " << max_x << " " << min_y << " " << max_y << endl;
        ans = min(ans,(max_x-min_x)*(max_y-min_y));

    }

    cout << ans;

    // Please write your code here.
    return 0;
}