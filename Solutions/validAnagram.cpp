class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char, int> charMap;
        if(s.length() != t.length()){
            return false;
        }
        
        for(int i = 0; i < s.length(); i++){
            charMap[s[i]]++;
            charMap[t[i]]--;
        }
        
        for(auto countKey: charMap){
            if(countKey.second != 0){
                return false;
            }
        }
        return true;
        
    }
};