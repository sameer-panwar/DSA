#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main(){
    
    string str="ahnfladslalflksnlkdfa";
    
    int freq[26];
    for(int i=0; i<26; i++){
        freq[i]=0;
    }

    for(int i=0; i<str.length(); i++){
        freq[str[i]-'a']++;
    }

    char ans='a';
    int max=0;
    for(int i=0; i<26; i++){
        if(freq[i] > max){
            max=freq[i];
            ans=i+'a';
        }
    }

    cout<<ans<<" "<<max<<endl;

    // unordered_map<char, int> freq;

    // for(auto i:str){
    //     freq[i]++;
    // }

    // int max=0;
    // char ch;
    // unordered_map<char, int> ::iterator it;
    // for(it=freq.begin(); it!=freq.end(); it++){
    //     if(it->second>max){
    //         max=it->second;
    //         ch=it->first;
    //     }
    // }

    // cout<<ch<<" "<<max<<endl;

    return 0;
}