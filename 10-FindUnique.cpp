// Find unique number when all the numbers have one pair
#include<iostream>
using namespace std;

int unique(int arr[], int n){
    int xorSum=0;
    for(int i=0; i<n; i++){
        xorSum=xorSum^arr[i];
    }
    return xorSum;
}

int main(){
    int arr[]={1,2,2,3,4,3,1};
    cout<<unique(arr, 7);
    return 0;
}

