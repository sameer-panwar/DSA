//Printing a right angled triangle pattern with line one with 1, line 2 with 2 2 , line 3 with 3 3 3 and so no


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
          cout<<i ," ";
        }
        cout<<endl;
    }
}

