#include<iostream>
#include<vector>

using namespace std;

void subset(int i, vector<int>& arr, vector<int>& current, vector<vector<int>>& result){
    if(i == arr.size()){
        result.push_back(current);
        return;
    }

    current.push_back(arr[i]);

    subset(i+1, arr, current, result);

    current.pop_back();

    subset(i+1, arr, current, result);
}

int main(){

    vector<int> current;
    vector<vector<int>> result;

    vector<int> arr= {1,2,3};
    subset(0, arr, current, result);

    for(int i=0; i<result.size(); i++){
        for(int j=0; j<result[i].size(); j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}