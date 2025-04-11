#include<iostream>

using namespace std;

int binarySearch(int arr[], int tar, int start, int end){

    if(start <= end){
        
        int mid = start + (end - start)/2;

        if(arr[mid] == tar) return mid;
        else if(arr[mid] <= tar){
            return binarySearch(arr, tar, mid+1, end);
        }else{
            return binarySearch(arr, tar, start, mid-1);
        }
    }else{
        return -1;
    }
}

int main(){

    int arr[]={1,2,5,7,9,11,23};
    int tar= 7;

    cout<<binarySearch(arr, tar, 0, 6)<<endl;
    return 0;
}