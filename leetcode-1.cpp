
#include<iostream>
using namespace std;

int twoSum(int target){
            int nums[]={2,7,9,11}; 
            int newNums[2];
            int size= sizeof(nums)/4;
            for(int i=0; i<size; i++){
                int v1=target-nums[i];
                for(int j=i+1; j<size; j++){
                    if(nums[j]==v1){
                        newNums[0]=i;
                        newNums[1]=j;
                        break;
                    }
                }
            }
            return;
    }

int main(){
    twoSum(9);
}

