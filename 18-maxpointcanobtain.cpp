#include<iostream>
using namespace std;

int maxPoints(int arr[], int k, int n){
    int lsum=0, rsum=0;
    int maxSum = 0;

    for(int i=0; i<k; i++){
        lsum+=arr[i];
    }
    maxSum = lsum;
    cout<<"Lsum: "<<lsum<<endl;

    int rIndex=n-1;

    for(int i = k-1; i >= 0; i--){
        lsum = lsum - arr[i];
        rsum+= arr[rIndex];
        rIndex--;
        cout<<"sum: "<<(lsum + rsum)<<endl;

        maxSum = max(maxSum, rsum + lsum);
    }
    return maxSum;
}


int main(){

    int arr[]= {6,2,3,4,7,2,1,7,1};
    int k = 4;

    cout<<maxPoints(arr, k, 9)<<endl;
}