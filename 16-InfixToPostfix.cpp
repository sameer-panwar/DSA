#include<iostream>
#include<stack>
using namespace std;

int prec(char op){
    if(op == '^') return 3;
    if(op == '*' || op == '/') return 2;
    if(op == '+' || op == '-') return 1;
    return -1;
}

string infixToPostfix(string s){
    stack<char> st;
    string result = "";

    for(int i = 0; i < s.length(); i++){
        char c = s[i];

        if(c == ' ') continue; // skip spaces

        if(isalnum(c)){  // if it's a letter or digit
            result += c;
        }
        else if(c == '('){
            st.push(c);
        }
        else if(c == ')'){
            while(!st.empty() && st.top() != '('){
                result += st.top();
                st.pop();
            }
            if(!st.empty()) st.pop(); // pop '('
        }
        else{ // operator
            while(!st.empty() && prec(st.top()) >= prec(c)){
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    // Pop remaining operators
    while(!st.empty()){
        result += st.top();
        st.pop();
    }

    return result;
}

int main(){
    string s = "a+b*(c^d-e)^(f+g*h)-i";
    cout << infixToPostfix(s) << endl;
    return 0;
}
