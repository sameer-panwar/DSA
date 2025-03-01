#include<iostream>
#include<vector>
using namespace std;

//print 1 to N
// void printOneToN(int n){
//     if(n==0){
//         return;
//     }
//     printOneToN(n-1);
//     cout<<n<<" ";
// }





//print N to 1
// void printNToOne(int n){
//     if(n==0){
//         return;
//     }
//     cout<<n<<" ";
//     printNToOne(n-1);
// }



//factorial using recursion
// int fact(int n){
//     if(n==1){
//         return 1;
//     }

//     return n*fact(n-1);
// }




//reverse a array
// void reverseArray(vector<int>& arr, int n, int i){
//     if(i>=n)return;

//     int temp=arr[i];
//     arr[i]=arr[n];
//     arr[n]=temp;

//     reverseArray(arr, n-1, i+1);
// }


// int main(){

//     int n=5;
//     int i=0;
//     vector<int> arr={1,2,3,5,6};
//     reverseArray(arr, n-1, i);
//     for(int i: arr){
//         cout<<i<<" ";
//     }
//     return 0;
// }

//check palindrome string
// int palindrome(string s, int i, int n){
//     if(s[i] != s[n]){
//         return false;
//     }
//     palindrome(s, i+1, n-1);
//     return true;
// }


// int main(){
//     string s;
//     cin>>s;
//     int n=s.length();
//     cout<<palindrome(s,0,n-1);
//     return 0;
// }

//sum of digits
// int sumOfDigits(int n){
//     if(n==0)return 0;
//     int sum=n%10;
//     return sum+ sumOfDigits(n/10);
// }

// int main(){
//     int n=123456;
//     cout<<sumOfDigits(n);
//     return 0;
// }

int fibanocci(int n){
    if(n==0)return;

    return fibanocci(0)
}

int main(){

    return 0;
}