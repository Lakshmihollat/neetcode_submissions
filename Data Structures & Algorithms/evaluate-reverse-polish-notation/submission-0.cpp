class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        
        for (auto &tok : tokens) {
            if (tok == "+" || tok == "-" || tok == "*" || tok == "/") {
                int b = st.top(); st.pop(); // second operand
                int a = st.top(); st.pop(); // first operand
                
                if (tok == "+") st.push(a + b);
                else if (tok == "-") st.push(a - b);
                else if (tok == "*") st.push(a * b);
                else if (tok == "/") st.push(a / b); // truncates toward 0
            } else {
                st.push(stoi(tok)); // convert string to int
            }
        }
            return st.top();
    }
};
