class Solution {
public:
    int calPoints(vector<string>& operations) {
        int result=0;
        stack<int>nums;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]=="C")
            {
                nums.pop();
            }else if(operations[i]=="+")
            {
                int n=nums.top();
                nums.pop();
                int m=nums.top();
                //nums.pop();
                nums.push(n);
                nums.push(n+m);
            }else if(operations[i]=="D")
            {
                int n=nums.top();
                //nums.pop();
                nums.push(n*2);
            }else{
                nums.push(stoi(operations[i]));
            }
        }
        int res=0;
        while(!nums.empty())
        {
            res+=nums.top();
            nums.pop();
        }
        return res;
    }
};