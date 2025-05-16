#include<iostream>
using namespace std;

int longestSubstring(int arr[], int k, int n){
    int l=0, r=0, sum=0, maxlen=0;

    while(r<n){
        sum=sum+arr[r];
        while(sum>k){
            sum= sum - arr[l];
            l++;
        }
        if(sum <= k){
            maxlen = max(maxlen, r-l+1);
        }
        r++;
    }

    return maxlen;
}

void printLongestSubstring(int arr[], int k, int n){
    int l=0, r=0, sum=0;
    int maxl=0, maxr=-1;

    while(r<n){
        sum=sum+arr[r];
        while(sum>k){
            sum= sum - arr[l];
            l++;
        }
        if(sum <= k){
            if((r-l+1) >= (maxr - maxl + 1)){
                maxl=l;
                maxr=r;
            } 
        }
        r++;
    }

    for(int i=maxl; i<=maxr; i++){
        cout<<arr[i]<<" , ";
    }
    cout<<endl;
}


int main(){
    int arr[] = {2,5,1,7,10};
    int k = 14;

    cout<<longestSubstring(arr, k, 5)<<endl;
    printLongestSubstring(arr, k, 5);
}