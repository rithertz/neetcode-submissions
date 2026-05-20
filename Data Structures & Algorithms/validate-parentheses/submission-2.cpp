class Solution {
public:
    bool isMatching(char a, char b){
        return (a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'); 
    }
    bool isOpening(char a){
        return (a == '(') || (a == '{') || (a == '[');
    }
    bool isClosing(char b){
        return (b == ')') || (b == ']') || (b == '}');
    }
    bool isValid(string s) {
        stack<char> st;
        for(char &ch : s){
            if(st.empty() && isOpening(ch)){
                st.push(ch);
                continue;
            }
            else if(st.empty() && isClosing(ch)){
                return false;
            }
            if(isOpening(ch)){
                st.push(ch);
            }
            else if(isClosing(ch)){
                char sec = st.top();
                if(!isMatching(sec,ch)){
                    return false;
                }
                st.pop();
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};
