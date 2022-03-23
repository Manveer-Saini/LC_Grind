class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> result;
        
        // check the left to right direction.
        int prev = INT_MIN/2;
        
        for(int i = 0; i < s.length(); i++){
            if(s[i] == c){
                prev = i;
            }
            
            result.push_back(i - prev);
        }
        // check the right to left direction
        prev = INT_MAX/2;
        
        for(int i = s.length() -1; i >= 0; i--){
            if(s[i] == c){
                prev = i;
            }
            // store the minimum between the current result and current distance from prev.
            result[i] = result[i] < abs(prev - i) ? result[i] : abs(prev - i);
        }
        
        return result;
    }
};