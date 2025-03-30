#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<char, int> mp;
    
    string s="jiodfd";
    for(char ch: s){
        mp[ch]++;
    }
    
    for(auto it: mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}