class Solution {
public:
    bool isValid(string s) {
        stack<char>open;
        for(char c : s)
        {
            if(c=='{' || c=='(' || c=='[')
            {
                open.push(c);
            }else if(c==')' && !open.empty())
            {
                if(open.top()=='(')
                {
                    open.pop();
                }else{
                    return false;
                }
            }else if(c==']'&& !open.empty())
            {
                if(open.top()=='[')
                {
                    open.pop();
                }else{
                    return false;
                }
            }else if(c=='}'&& !open.empty())
            {
                if(open.top()=='{')
                {
                    open.pop();
                }else{
                    return false;
                }
            }else if(open.empty())
            {
                return false;
            }
        }
        return open.empty();
    }
};
