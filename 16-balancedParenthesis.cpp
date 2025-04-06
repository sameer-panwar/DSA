#include<iostream>
#include<stack>

using namespace std;

bool balParenthesis(string s){
    stack<char> st;
    int n=s.length();

    for(int i=0; i<n; i++){
        if(s[i] == '{' || s[i] == '['  || s[i] == '('){
            st.push(s[i]);
        }else if(s[i] == '}'){
            if(st.top() == '{'){
                st.pop();
            }else{
                return false;
            }
        }else if(s[i] == ']'){
            if(st.top() == '['){
                st.pop();
            }else{
                return false;
            }
        }else if(s[i] == ')'){
            if(st.top() == '('){
                st.pop();
            }else{
                return false;
            }
        }

    }

    if(!st.empty()){
        return false;
    }

    return true;
}

void check(bool val){
    if(val == 1){
        cout<<"Valid string"<<endl;
    }else{
        cout<<"Invalid String"<<endl;
    }
}

int main(){

    string s1= "{[()]}";
    string s2= "{([]})";

    check(balParenthesis(s1));
    check(balParenthesis(s2));
    return 0;
}