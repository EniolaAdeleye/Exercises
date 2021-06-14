class Solution {
public:
    int subtractProductAndSum(int n) {
       
        int sum = 0;
        int prod = 1;
        
        while (n) {
            int value = n % 10;
            sum += value;
            prod *= value;
            
            n /= 10;
        }
        
        return prod - sum;
    }
};
