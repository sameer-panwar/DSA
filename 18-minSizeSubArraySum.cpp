#include<iostream>
#include<vector>
using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
    int r=0, l=0, sum=0, minlen=__INT_MAX__;

    while(r < nums.size()){
        sum+= nums[r];

        while(sum > target){
            sum = sum - nums[l];
            l++;
        }

        if (sum == target){
            minlen = min(minlen, r-l+1);
        }

        r++;
    }

    return minlen;
}

int main(){

    vector<int> arr = {2,3,1,2,4,3};
    cout<<minSubArrayLen(7 ,arr)<<endl;
    return 0;
}