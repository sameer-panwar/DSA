#include<iostream>
#include<algorithm>
using namespace std;

int noOfSubstring(string s){
    int count =0;
    int arr[3] = {-1,-1,-1};

    for(int i=0; i<s.size(); i++){
        arr[s[i]-'a']=i;

        if(arr[0] != -1 && arr[1] != -1 && arr[2] != -1){
            count +=min(min(arr[0], arr[1]), arr[2])+1;
        }
    }
    return count;
}

int main(){
    string s= "bbacba";
    cout<<noOfSubstring(s)<<endl;
    return 0;
}