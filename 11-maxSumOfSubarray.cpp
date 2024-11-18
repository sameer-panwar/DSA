#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>

using namespace std;

int maxSubArray(vector<int>& arr, int k){
    int n=arr.size();
    int j=0;
    int sum=0;
    int maxSum=INT_MIN;
    while(j<k){
        sum+=arr[j];
        j++;
    }
    maxSum=sum;

    for(int i=0; i<n-k; i++){
        sum+=arr[j]-arr[i];
        if(sum>maxSum){
            maxSum=sum;
        }
        j++;
    }
    return maxSum;
}

int main(){
    vector<int> arr={2,5,1,8,2,9,1};
    int k=3;
    int result=maxSubArray(arr, k);
    cout<<result<<endl;
    return 0;
}