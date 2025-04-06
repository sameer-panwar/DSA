#include<iostream>
#include<stack>

using namespace std;

bool balParenthesis(string s){
    stack<char> st;
    st.push(s[0]);
    for(int i=1; i<s.length(); i++){
        if(s[i] != st.top()){
            st.push(s[i]);
        }else{
            st.pop();
        }
    }

    return st.empty();
}

int main(){

    string s1= "{[()]}";
    string s2= "{([]})";

    cout<<balParenthesis(s1)<<endl;
    cout<<balParenthesis(s2)<<endl;
    return 0;
}