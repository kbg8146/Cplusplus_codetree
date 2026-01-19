#include <iostream>
#include <vector>

using namespace std;

int k,n;
vector<int> selected_nums;

void FindPermutations(int cnt){
    if(cnt==n){
        for(int i=0;i<(int)selected_nums.size();i++){
            cout << selected_nums[i] << " ";
        }
        cout << endl;
        return;
    }
    for(int i=1;i<=k;i++){
        selected_nums.push_back(i);
        FindPermutations(cnt+1);
        selected_nums.pop_back();
    }
}
int main() {
    cin >> k >> n;
    FindPermutations(0);
    // Please write your code here.

    return 0;
}
