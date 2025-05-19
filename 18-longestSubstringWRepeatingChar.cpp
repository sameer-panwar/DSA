#include<iostream>
#include<unordered_map>
using namespace std;

int longestSubstringWithoutRepeatingCharacters(string s){
    int n = s.size();
    int l=0, maxlen= 0;

    unordered_map<char, int> mp;

    for(int r=0; r<n; r++){
        if(mp.count(s[r]) && mp[s[r]] >= l){
            l = mp[s[r]] + 1;
        }

        mp[s[r]] = r;
        maxlen = max(maxlen, r-l+1);

    }
    return maxlen;

}

int main(){
    string s = "asdfgiansp";

    cout<<longestSubstringWithoutRepeatingCharacters(s)<<endl;
    cout<<longestSubstringWithoutRepeatingCharacters("abcdefgh")<<endl;
    return 0;
}