class Solution {
public:
    int countOdds(int low, int high) {
        int oddCounter = 0;
        
        if((high - low + 1) % 2 == 0){
            oddCounter = (high - low + 1) / 2;
        }
        else{
            if((high % 2 == 0 && low % 2 == 0)){
                oddCounter = (high - low + 1) / 2;
            }
            else{
                oddCounter = ((high - low + 1) / 2) + 1;
            }
        }
        return oddCounter;
    }
};