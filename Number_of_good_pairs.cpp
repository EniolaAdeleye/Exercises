class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        std::vector<int> pair;
        
        for (int i = 0; i < nums.size(); i++) 
        for (int j = i+1; j < nums.size(); j++)
            if (nums[i] == nums[j]) 
                pair.push_back(1);
            
             
            
            return pair.size();
        }
};
