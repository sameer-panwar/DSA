//find the hcf of a number

#include<iostream>
using namespace std;

int hcf(int a, int b){
    int rem=0;
   while(b!=0){
    rem=a%b;
    a=b;
    b=rem;
   }
   return a;
}

int main(){

    int a=42, b=24;

    cout<<hcf(a, b)<<endl;
    return 0;
}