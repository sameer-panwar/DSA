#include<iostream>
#include<unordered_map>
using namespace std;

int longestSubstring(string s, int k){
    int right=0, left=0, maxlen=0;

    unordered_map<char, int> mp;

    while(right < s.size()){
        mp[s[right]]++;

        if(mp.size() > k){
            mp[s[left]]--;
            if(mp[s[left]] == 0){
                mp.erase(s[left]);
            }
            left++;
        }

        if(mp.size() <= k){
            maxlen= max(maxlen, right-left+1);
        }

        right++;
    }

    return maxlen;
}

int main(){

    string s="aaabbcc";
    string s2 = "aaaaaabbbbbbbbacccccc";
    cout<<longestSubstring(s2, 2)<<endl;
    cout<<longestSubstring(s, 2)<<endl;
    return 0;
}