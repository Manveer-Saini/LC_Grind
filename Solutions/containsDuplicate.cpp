class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> numberMap; 
        
        for(auto value: nums){
            if(numberMap.count(value)){
                return true;
            }
            else{
                numberMap.insert(make_pair(value, 1));
            }
        }
        return false;
    }
};