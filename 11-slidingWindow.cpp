
#include<iostream>
#include<algorithm>

using namespace std;

int minSum(int arr[], int k, int n){
    int sum=0;
    for(int i=0; i<k; i++){
        sum+=arr[i];
    }

    int minSum=sum;

    for(int i=k; i<n; i++){

        sum+=arr[i]-arr[i-k];
        minSum=min(minSum, sum);
    }

    cout<<minSum<<endl;    
}


int main(){
    int arr[]= {2,3,4,1,-2,-1,3};
    int n=7;
    int k=3;

    minSum(arr, k, n);
    return 0;
}