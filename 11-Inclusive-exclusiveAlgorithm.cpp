#include<iostream>
using namespace std;

int divisibleBy(int n, int a, int b){
    int c1=n/a;
    int c2=n/b;

    int c3=n/(a*b);

    return c1+c2-c3;
}

int main(){

    int n=100;
    int a=5, b=7;

    cout<<divisibleBy(n, a, b)<<endl;
    return 0;
}