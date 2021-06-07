class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       
        int wealth = 0;
        
        for (int i = 0; i < accounts.size(); i++) {
            
        wealth = max(accumulate(accounts[i].begin(), accounts[i].end(), 0), wealth);
            
        }
        
        return wealth;
    }
};
