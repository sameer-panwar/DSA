#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main(){

    string str="hello how are you";

    stringstream ss(str);

    for(auto word: ss){
        cout<<word<<endl;
    }

    return 0;
}