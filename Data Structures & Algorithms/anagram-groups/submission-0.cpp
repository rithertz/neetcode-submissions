class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        /*
            Pseudocode:
            1. Create dictionary : for each string in strs:
                key is sorted form of each word, value is a string list getting 
                appended by the original word.
            2. Create result array of anagrams : for each key in dict:
                append the corresponding anagrams value (the string list)        
        */

        unordered_map<string , vector<string>> mp;
        for(const string &s : strs){
            string key = s;
            sort(key.begin(),key.end());
            mp[key].push_back(s);
        }

        vector<vector<string>> result;

        for(const auto &pair : mp){
            result.push_back(pair.second);
        }
        return result;
    }
};
