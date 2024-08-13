//insertion sort

#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter the number of elements";
    cin>>n;


    cout<<"Enter the elements of the array?"<<endl;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


    for(int i=1; i<n; i++){
        int key=arr[i];
        int j=i-1;
        while(arr[j]>key  &&  j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

    cout<<"Sorted Array...."<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}