
#include<iostream>
using namespace std;

int subsets(int arr[], int n){
    for(int i=0; i<(1<<n); i++){
        for(int j=0; j<n; j++){
            if( i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int arr[3]={1,2,3};
    int n=3;
    subsets(arr, n);
    return 0;
}