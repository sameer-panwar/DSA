#include<iostream>
#include<string>

using namespace std;

int main(){

    string a="wo";
    string b="Hello world";

    int n=a.size();
    int m=b.size();

    for(int i=0; i<m-n+1; i++){
        if(b.substr(i, n)==a){
            cout<<i<<endl;
        }
    }


    return 0;
}