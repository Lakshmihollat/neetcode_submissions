class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        /*vector<int> res(temperatures.size(), 0);
        stack<pair<int, int>> stack; // pair: {temp, index}

        for (int i = 0; i < temperatures.size(); i++) {
            int t = temperatures[i];
            while (!stack.empty() && t > stack.top().first) { //temp is greater than top temp in stack
                auto pair = stack.top();   // top temp and intex in stack
                stack.pop();
                res[pair.second] = i - pair.second;  //res[index]= current index(high temp index) - index(of that temp for which we are looking for height temp than)
            }
            stack.push({t, i});  // current temp and index into stack.. cause we need to search for that also
        }
        return res;*/

        vector<int>res(temperatures.size(),0);
        stack<pair<int,int>>st; //value and its index
        for(int i=0;i<temperatures.size();i++)
        {
            int t=temperatures[i];
            while(!st.empty() && st.top().first<t)
            {
                auto pair=st.top();
                st.pop();
                res[pair.second] = i-pair.second;
            }
            st.push({t,i});
        }
        return res;
    }
};