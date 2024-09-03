#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

class Solution {
        public:
            bool isPalindrome(int x) {
                if(x<10){
                    return false;
                     cout<<"Is not palindrome"<<endl;
                }
                string y=to_string(x);
                int size=y.length();
                for(int i=0; i<size/2; i++){
                    if(y[size-1] == y[i]){
                         cout<<"Is palindrome"<<endl;
                        return true;
                    }else{
                         cout<<"Is not palindrome"<<endl;
                        return false;
                    }
                }
            }
        };

int main(){
    Solution obj;
    obj.isPalindrome(121);
    //obj.isPalindrome(10);
    //obj.isPalindrome(-10); // converted to string value so it can check negative values as palindrome or not
    //obj.isPalindrome(12345);
    //obj.isPalindrome(-121);
    obj.isPalindrome(2);
    obj.isPalindrome(11);

    return 0;
}