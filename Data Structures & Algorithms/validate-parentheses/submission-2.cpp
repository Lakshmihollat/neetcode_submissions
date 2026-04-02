class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2!=0)return false;
        stack<char>open;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                open.push(s[i]);
            }
            else{
            if(open.empty())return false;
            if(s[i]==')' && open.top()=='(')
            {
                open.pop();
            }
            else if(s[i]==']' && open.top()=='[')
            {
                open.pop();
            }
            else if(s[i]=='}' && open.top()=='{')
            {
                open.pop();
            }
            else{
                return false;
            }
            }
        }
        return open.empty();
    }
};
