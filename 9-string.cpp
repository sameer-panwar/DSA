#include<iostream>
#include<string>
using namespace std;

int main(){
    
    string str;
    str="hello";
    cout<<str<<endl;


    string str2;
    getline(cin, str2);
    cout<<str2<<endl;

    string temp="132";
    int x=stoi(temp);
    cout<<x<<endl;

    return 0;
}

/*
str.clear();
str.append(str1);
str.erase(3, 2)   (index, no. of characters)
str.size();
str.find("ll");
str.insert(3, "n");
str.empty();
int x=stoi(str);
to_string(x);
*/