class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
//         vector<int>::iterator firstPtr = nums.begin();
//         vector<int>::iterator lastPtr = nums.end() - 1;
//         bool isMono = true;
        
//         // might be monotonically increasing
//         if(*firstPtr <= *lastPtr){
//             for(auto val = nums.begin(); val != nums.end() - 1; val++){
//                 if(*val <= *(val + 1)){
//                     isMono = true;
//                 }
//                 else{
//                     return false;
//                 }
                
//             }
//         }
//         // might be monotonically decreasing
//         else{
//             for(auto val = nums.begin(); val != nums.end() - 1; val++){
//                 if(*val >= *(val + 1)){
//                     isMono = true;
//                 }
//                 else{
//                     return false;
//                 }
                
//             }
//         }
//         return isMono;
        
        bool isIncreasing = true;
        bool isDecreasing = true;
        for(auto val = nums.begin(); val != nums.end() - 1; val++){
            // If it is not monotonically increasing
            if(*val > *(val + 1)){
                isIncreasing = false;
            }
            // If it is not monotonically decreasing
            else if(*val < *(val + 1))
            {
                isDecreasing = false;
            }
        }
        // Cannot be Monotonically decreasing and increasing at the same time, has to be either increasing or decreasing.
        return isIncreasing || isDecreasing;
        
    }
};