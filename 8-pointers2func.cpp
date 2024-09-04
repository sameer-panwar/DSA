#include<iostream>
using namespace std;

void increment(int *a){
    (*a)++;
}

void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main(){
    int a=2;
    increment(&a);
    cout<<a<<endl;

    int x=3;
    int y=6;

    swap(&x, &y);
    cout<<x<<" "<<y<<endl;
    return 0;
}