#include<iostream>
#include<string>
using namespace std;

int main(){
    
    string str;
    cout<<"Enter a string?"<<endl;
    cin>>str;
    cout<<str<<endl;

    for(int i=0; i<str.length(); i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
    cout<<str<<endl;

    cout<<"........................."<<endl;

    string str2=str;
    cout<<str2<<endl;

    for(int i=0; i<str.length(); i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
    }
    cout<<str<<endl;
    return 0;
}

//transform(str.begin(), str.end(), str.begin(), ::toupper)
//sort(str.begin(), str.end(), greater<int>());