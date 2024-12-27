
#include<iostream>
#include<algorithm>

using namespace std;

bool array(int arr[], int n){
    return array(arr, n-1)<arr[n];
}

int main(){
    int n=6;
    int arr[n]={1,2,3,4,5,6};
    cout<<array(arr, n);
    return 0;
}