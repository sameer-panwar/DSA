//Linear Search

#include<iostream>
using namespace std;


int main(){
    int arr[]={10, 20,6, 222, 66,72};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<=size; i++){
        cout<<arr[i]<<endl;
    }
    

    cout<<"Enter a key to find"<<endl;
    int key;
    cin>>key;

    for(int i=0; i<=size; i++){
        if(arr[i]==key){
            cout<<i<<endl;
        }
        return -1;
    }
    return 0;
}