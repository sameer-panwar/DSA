#include<algorithm>
#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution{
    public:
        vector<int> plusOne(vector<int>& digits) {
           string str;
           for(auto element:digits){
            str+=element;
           } 
           int num=stoi(str);
           num++;
           while(num>0){
            digits.push_back(num%10);
            num=num/10;
           }
           return digits;
    }
};

int main(){
    Solution obj;
    //std::vector<int> digits = {1, 2, 3};
    std::vector<int> digits = {1,2,3};
    
    // Call the plusOne method with the array as a parameter
    std::vector<int> result = obj.plusOne(digits);
    
    // Output the result
    std::cout << "Result: ";
    for(int num : result) {
        std::cout << num << " ";
    }
}