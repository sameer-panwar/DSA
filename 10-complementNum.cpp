// Find the complement of a Number

#include<iostream>

using namespace std;

int findComplement(int num){
    int mask=0; 
    int temp= num;

    while(temp>0){
       mask= (mask<<1) | 1;
       temp>>=1; 
    }
    return ~num & mask;
}


int main(){
    
    int num=10;
    cout<<findComplement(num)<<endl;
    return 0;
}