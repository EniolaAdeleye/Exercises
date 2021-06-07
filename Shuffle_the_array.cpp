class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        std::vector<int> output;
        int i = 0;
        int j = n;
        while (j < nums.size()) {
            
            output.push_back(nums[i]);
            output.push_back(nums[j]);
            
            i++;
            j++;}   
            
            return output;
    }
};
