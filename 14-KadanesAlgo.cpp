#include<iostream>
using namespace std;
//Done in O(n) time complexity

int main(){

    int n=5;
    int arr[n]={1,2,3,4,5};


    int currSum=0;  
    int maxSum=INT8_MIN;

    for(int i=0; i<n; i++){
        currSum+=arr[i];
        maxSum=max(currSum, maxSum);

        if(currSum<0){
            currSum=0;
        }
    }
    
    cout<<maxSum<<endl;

    return 0;
}