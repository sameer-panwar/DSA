#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>

using namespace std;

vector<int> firstNeg(vector<int>& nums, int k){
    int n=nums.size();

    vector<int> arr;
    vector<int> res;

    int j=0;

    while(j<k){
        if(nums[j]<0){
            arr.push_back(i);
        }
        j++;
    }


    for(int i=0; i<n-k; i++){
        if(!arr.empty()){
        res.push_back(arr[0]);
        }else{
            res.push_back(0);
        }

        if(arr[j]<0){
            arr.push_back(arr[j]);
        }

        arr.pop_front();
    }
    return res;
}


int main(){

    vector<int> nums={12,-1,-7,8,-15,30,16,28};
    int k=3;

    cout<<firstNeg(nums, k);

    return 0;
}