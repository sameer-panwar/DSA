
#include<iostream>
#include<vector>
using namespace std;

vector<int> subsets(vector<int> arr, int n){
    vector<vector<int>> ans;
    for(int i=0; i<(1<<n); i++){
        vector<int> temp;
        for(int j=0; j<n; j++){
            if( i & (1<<j)){
                temp.push_back(arr[j]);
            }
        }
        ans.push_back(temp);
    }
    return ans;
}

int main(){
    vector <int> arr={1,2,3};
    int n=3;
    vector<vector<int>> ans =subsets(arr, n);
    for(auto i:ans){
        cout<<i<<endl;
    }
    return 0;
}