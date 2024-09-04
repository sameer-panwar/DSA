#include<iostream>
using namespace std;

int main(){
    
    cout<<"Enter the length of the character"<<endl;
    int n;
    cin>>n;

    cout<<"Enter the charcter"<<endl;
    char arr[n+1];
    cin>>arr;

    bool flag=true;
    for(int i=0; i<n; i++){
        if(arr[i]!=arr[n-1-i]){
            flag=false;
            break;
        }
    }
    cout<<flag<<endl;
    if(flag == true){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"NOt Palindrome"<<endl;
    }

    return 0;
}