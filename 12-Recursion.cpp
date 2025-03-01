#include<iostream>

using namespace std;

// int fact(int n){
    
//     if(n==0 || n==1){
//         return 1;
//     }
//     return n*fact(n-1);
// }

// int power(int n, int p){

//     if(p==0){
//         return 1;
//     }
//     return n*power(n,p-1);
// }

int addTillZero(int n){

    if(n==0){
        return 0;
    }
    return n+addTillZero(n-1);
}


int main(){
    // int n,p;
    // cout<<"Enter a number and power"<<endl;
    // cin>>n>>p;
    // cout<<power(n,p);

    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<addTillZero(n);
    return 0;
}