class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<string>st;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]=="+")
            {
                int m=stoi(st.top());
                st.pop();
                int n=stoi(st.top());
                st.pop();
                st.push(to_string(n));
                st.push(to_string(m));
                st.push(to_string(m+n));
            }else if(operations[i]=="C")
            {
                st.pop();
            }else if(operations[i]=="D")
            {
                int m=stoi(st.top());
                st.push(to_string(m*2));
            }else{
                st.push((operations[i]));
            }
        }
        int sum=0;
        while(!st.empty())
        {
            sum+=stoi(st.top());
            st.pop();
        }
        return sum;
    }
};