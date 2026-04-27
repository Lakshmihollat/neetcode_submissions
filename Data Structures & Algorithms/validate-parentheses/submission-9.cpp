class Solution {
public:
    bool isValid(string s) {
        stack<char>open;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            {
                open.push(s[i]);
            }else if(s[i]==')' || s[i]=='}' || s[i]==']')
            {
                if(open.empty())
                {
                    return false;
                }
                if(s[i]==')' && open.top()=='(')
                {
                    open.pop();
                }else if(s[i]==']' && open.top()=='[')
                {
                    open.pop();
                }else if(s[i]=='}' && open.top()=='{')
                {
                    open.pop();
                }else{
                    return false;
                }
            }
        }
        return open.empty();
    }
};
