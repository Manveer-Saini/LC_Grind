class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numberMap;
        int counter = 0;
        int complement = 0;
        vector<int> result;
        
        for(auto value: nums){
            complement = target - value;
            
            if(numberMap.count(complement)){
                result.push_back(numberMap.find(complement)->second);
                result.push_back(counter);
            }
            
            numberMap.insert(make_pair(value, counter));
            counter++;
        }
        return result;
    }
};