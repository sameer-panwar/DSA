#include<iostream>
using namespace std;
//with O(n2) time complexity
//use Kadane's Algorithem for O(n) time complexity

int main(){

    int n=5;
    int arr[n]={1,2,3,4,5};

    int maxSum=INT8_MIN;
    for(int st=0; st<n; st++){
        int currSum=0;
        for(int end=st; end<n; end++){
            currSum+=arr[end];
            maxSum=max(currSum, maxSum);
        }
    }

    cout<<"Max sub Array="<<maxSum<<endl;

    return 0;
}