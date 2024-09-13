// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>

using namespace std;

    class Solution {
public:
    int thirdMax(vector<int>& nums) {
    int n =  nums.size();
    int count=1;
    for(int i=n-1;i>0;i--){
        if(nums[i]!= nums[i-1]){
            count++;
        }
        if(count==3){
            cout<<nums[i-1]<<endl;
        }
    }
    cout<<nums[n-1]<<endl;
    }
};
int main() {
    Solution obj;
    vector<int> nums{1,1,-235482364};
    obj.thirdMax(nums);
    return 0;
}