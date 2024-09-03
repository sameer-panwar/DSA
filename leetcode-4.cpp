#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:

    int missingNumber(vector<int>& nums) {
        int n=nums.size();

        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            if(i==nums[i]){
            }else{
                return i;
            }
        }  
             
    }
};

int main(){

    Solution obj;
    vector<int> v1{3,0,1};
    vector<int> v2{0,1};
    vector<int> v3{6,4,2,5,7,0,1};
    cout<<"VAlue is"<<obj.missingNumber(v1)<<endl;
    cout<<"VAlue is"<<obj.missingNumber(v2)<<endl;
    cout<<"VAlue is"<<obj.missingNumber(v3)<<endl;
    return 0;
}