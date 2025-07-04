// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

// int fact(int n){
//     if(n == 1 || n ==0){
//         return n;
//     }
    
//     return n*fact(n-1);
// }

// int fib(int n){
//     if(n==0 || n==1){
//         return n;
//     }
    
//     return fib(n-1)+fib(n-2);
// }

// int sumOfDigits(int n){
//     if(n == 0){
//         return 0;
//     }
    
//     return (n%10)+sumOfDigits(n/10);
// }

// int print(int n){
//     if(n == 1){
//         cout<<1<<" ";
//         return 1;
//     }
//     print(n-1);
    
//     cout<<n<<" ";
//     return 0;
// }

// int palindrome(string str, int start, int end){
//     if(start >= end){
//         return true;
//     }
    
//     if(str[start] != str[end]){
//         return false;
//     }
    
//     return palindrome(str, start+1, end-1);
// }

//Medium Level Questions

// int power(int n, int p){
//     if(p == 1 || p==0){
//         return n;
//     }
    
//     return n*power(n, p-1);
// }


// void subset(int i, string s, vector<string>& current, vector<vector<string>>& result){
    
//     if(i == s.size()){
//         result.push_back(current);
//         return;
//     }
    
//     current.push_back(string(1, s[i]));
//     subset(i+1, s, current, result);
//     current.pop_back();
//     subset(i+1, s, current, result);
// }


int binarySearch(vector<int> arr, int target, int start, int end){
    int mid = left+start/2;
    
    if(mid == target){
        return mid;
    }
    
    if(mid<target){
        binarySearch(arr, target, mid+1, end);
    }else{
        binarySearch(arr, target, start, mid-1);
    }
    
    return mid;
}

int main() {

    vector<int> arr = {1,3,5,7,8,12,34,74,88,89};
    int target = 34;
    cout<<binarySearch(arr, target, 0, arr.size()-1)<<endl;
    return 0;    
}
