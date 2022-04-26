class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        int remainder = n;
        
        while(n != 0){
            remainder %= 10;
            product *= remainder;
            sum += remainder;
            n /= 10;
            remainder = n;
        }
        
        return product - sum;
        
        
    }
};