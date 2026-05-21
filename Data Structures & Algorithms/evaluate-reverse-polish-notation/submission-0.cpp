class Solution {
public:
    int evaluate(int f, int s, string ch){
        int result = 0;
        if(ch == "+"){
            result = f + s;
        }
        else if(ch == "-"){
            result = f - s;
        }
        else if(ch == "*"){
            result = f * s;
        }
        else {
            result = f / s;
        }
        return result;
    }
    
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        
        for(string& token : tokens) {
            if(token == "+" || token == "-" || token == "*" || token == "/") {
                int second = st.top(); st.pop();
                int first = st.top(); st.pop();
                int result = evaluate(first, second, token);
                st.push(result);
            } else {
                st.push(stoi(token));
            }
        }
        
        return st.top();
    }
};