#include<iostream>
#include<stack>
#include<unordered_map>
#include<string>
using namespace std;
bool valid_parenthesis(string s){
unordered_map<char,char> mp = {{'(', ')'} , {'[', ']'}, {'{', '}'}};
        stack<char> st;
        for(int i = 0; i < s.size(); i++)
        {   // check if opening bracket, if so then push it to the stack
            if(s[i] == '(' || s[i] == '[' || s[i] == '{' )
            {
                st.push(s[i]);
            }
            // if not then it is the closing bracket
            // first match it with the top of the stack such that it corresponds to the closing bracket
            else if(st.empty() && mp[st.top()] == s[i]){
                st.pop();
            }
        

        }
        
    }


    int main(){
        string s = "([{}])";
        cout<<valid_parenthesis(s);
        return 0;
    }