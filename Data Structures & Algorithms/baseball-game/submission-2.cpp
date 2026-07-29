class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<string>s;
        int i=0;
        while(i!=operations.size())
        {
            if(operations[i]=="+")
            {
                int m=stoi(s.top());
                s.pop();
                int n=stoi(s.top());
                s.pop();
                s.push(to_string(n));
                s.push(to_string(m));
                s.push(to_string(m+n));
            }else if(operations[i]=="C")
            {
                s.pop();
            }else if(operations[i]=="D")
            {
                int m=stoi(s.top());
                //s.pop();
                //s.push(to_string(m));
                s.push(to_string(m*2));
            }else{
                s.push(operations[i]);
            }
            i++;
        }
        int sum=0;
        while(!s.empty())
        {
            sum+=stoi(s.top());
            s.pop();
        }
        return sum;
    }
};