
#include<unordered_map>
using namespace std;

int longestSubstring(string s, int k){
    int left=0, maxlen=0, maxFreq=0;

    unordered_map<char, int> mp;
    for(int right=0; right<s.size(); right++){
        mp[s[right]]++;
        maxFreq = max(maxFreq, mp[s[right]]);

        if((right - left + 1) - maxFreq > k){
            mp[s[left]]--;
            maxFreq = max(maxFreq, mp[s[left]]);
            if(mp[s[left]]== 0){
                mp.erase(s[left]);
            }
            left++;
        }

        if((right - left + 1)  - maxFreq <= k){
            maxlen= max(maxlen, right - left + 1);
        }

    }
    return maxlen;
}

int main(){

    string s= "AABACBBA";
    string s2 = "AABBAACA";
    cout<<longestSubstring(s, 2)<<endl;
    cout<<longestSubstring(s2, 2)<<endl;
    return 0;
}