//check if a given number is power of 2 or not.

#include<iostream>
using namespace std;

int powerOfTwo(int n){
    return (n>0  &&  !(n & n-1));
}




int main(){

    cout<<powerOfTwo(8)<<endl;
    cout<<powerOfTwo(7)<<endl;
    
    return 0;
}