class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        unordered_map<char,int>freq;
        int n=s.size();
        for(int i=0;i<n;i++){
            freq[s[i]]++;
            freq[t[i]]--;
        }
        for(auto &pair:freq){
            if(pair.second!=0)return false;
        }
        return true;
    }
};
