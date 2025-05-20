#include<iostream>
#include<unordered_map>
using namespace std;

int fruitIntoBasket(int nums[], int k, int n){
    int r=0, l=0, maxlen=0;

    unordered_map<int, int> mp;

    while(r < n){
        mp[nums[r]]++;

        if(mp.size() > k){
            mp[nums[l]]--;
            if(mp[nums[l]] == 0){
                mp.erase(nums[l]);
            }
            l++;
        }

        if(mp.size() <= k){
            maxlen = max(maxlen, r-l+1);
            
        }
        r++;
    }

    return maxlen;
}

int main(){

    int arr[] = {3,3,3,1,2,1,1,2,3,3,4};
    cout<<fruitIntoBasket(arr ,2 ,11)<<endl;
    int arr2[]= {1,1,1,2,2,2,2};
    cout<<fruitIntoBasket(arr2, 2, 7)<<endl;
    return 0;
}