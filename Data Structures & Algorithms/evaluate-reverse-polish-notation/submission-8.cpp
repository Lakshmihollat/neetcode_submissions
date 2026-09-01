class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int ans=0;
        stack<int>st;
        int i=0;
        while(i!=tokens.size())
        {
            if(tokens[i]=="+")
            {
                int m=st.top();st.pop();
                int n=st.top();st.pop();
                st.push(m+n);
            }else if(tokens[i]=="-")
            {
                int m=st.top();st.pop();
                int n=st.top();st.pop();
                st.push(n-m);
            }
            else if(tokens[i]=="*")
            {
                int m=st.top();st.pop();
                int n=st.top();st.pop();
                st.push(m*n);
            }
            else if(tokens[i]=="/")
            {
                int m=st.top();st.pop();
                int n=st.top();st.pop();
                st.push(n/m);
            }else{
                st.push(stoi(tokens[i]));
            }
            i++;
        }
        return st.top();
    }
};
