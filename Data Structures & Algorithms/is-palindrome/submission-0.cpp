class Solution {
public:
    string processString(string s){
        string result = "";
        for(const char &ch : s){
            if(isalnum(ch)){
                result += tolower(ch);
            }
        }
        return result;
    }
    bool isP(string s, int l, int r){
        if(l > r){
            return true;
        }
        if(s[l] != s[r]){
            return false;
        }
        return isP(s,l+1,r-1);
    }
    bool isPalindrome(string s) {
        string str = processString(s);
        int n = str.size();
        return isP(str,0,n-1);
    }
};
