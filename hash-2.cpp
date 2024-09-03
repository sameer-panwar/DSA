#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;

//Find the highest frequency element in the array

int main(){


    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    map<int, int>frequency;
    for(auto i:arr){
        frequency[i]++;
    }

    int highest=0;
    int numWithHighestFrequency=-1;
    for(map<int, int>::const_iterator it=frequency.begin(); it != frequency.end(); it++ ){

        if(it->second>highest){
            highest=it->second;
            numWithHighestFrequency=it->first;
        }
    }

    cout<<"Number with highest frequency is "<< numWithHighestFrequency <<endl;
}