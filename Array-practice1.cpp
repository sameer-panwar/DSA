//max till i

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

    cout<<"[";
    for(int i=0; i<n; i++){
        int mx=max(mx, arr[i]);
        cout<<mx<<",";
    }
    cout<<"]"<<endl;
}