#include<iostream>
using namespace std;


int maxConsOnes(int nums[], int n, int k){
    int l=0, r=0, zeros=0, maxlen=0;

    while(r < n){
        if(nums[r] ==  0) {
            zeros++;
        }

        if(zeros > k){
            if(nums[l] == 0){
                zeros--;
            }
            l++;
        }

        
        maxlen = max(maxlen, r-l+1);
        r++;
    }

    return maxlen;
}

int main(){

    int nums[] = {1,1,1,0,0,0,1,1,1,1,0};
    int nums2[] = {0,0,0,0};

    cout<<maxConsOnes(nums2, 4, 2)<<endl;

    cout<<maxConsOnes(nums, 11, 2)<<endl;
    return 0;
}