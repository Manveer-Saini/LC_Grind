class Solution {
public:
    int arraySign(vector<int>& nums) {
        int product = 1;
        int currentSignValue = 1;
        
        for(auto value: nums){
            if(value != 0){
                currentSignValue = value / abs(value);   
            }
            else{
                return 0;
            }
            product *= currentSignValue;
        }
        
        
        if(product > 0){
            product = 1;
        }
        else{
            product = -1;
        }
        
        return product;
    }
};