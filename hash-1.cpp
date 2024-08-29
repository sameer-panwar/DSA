#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;

//Find the frequensies of the element of the array

int main(){


    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    map<int, int> frequency;
    for(int i:arr){
        frequency[i]++;
    }

    cout<<"Frequencies are:"<<endl;
    for(const auto& pair: frequency){
        cout<<pair.first<<"=>"<<pair.second<<endl;
    }

    return 0;
}
