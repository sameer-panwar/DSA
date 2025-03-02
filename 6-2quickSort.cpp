#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

int partition(int arr[], int l, int r){
    int pivot=arr[r];
    int i=l-1;

    for(int j=l; j<=r-1; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}


void quickSort(int arr[], int l, int r){
    if(l<r){
        int pi=partition(arr,l,r);

        quickSort(arr, l, pi-1);
        quickSort(arr, pi+1, r);
    }
}

int main(){
    int arr[]={2,6,1,7,4,9,3,8};
    quickSort(arr, 0, 7);

    for(int i=0; i<8; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}