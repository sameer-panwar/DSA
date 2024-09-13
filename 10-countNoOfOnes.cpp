//To check how many Number of SETS BITS(1) are there in a number.

#include<iostream>
using namespace std;

int noOfOnes(int n){
    int count=0;
    while(n!=0){
        n=n & (n-1);
        count++;
    }
    return count;
}

int main(){

    int n=15;
    int m=9;
    cout<<noOfOnes(n)<<endl;
    cout<<noOfOnes(m)<<endl;
    return 0;
}