class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;  // to store richest wealth
        
        for(int i = 0; i < accounts.size(); i++) {
            int currentSum = 0;
            
            // sum all accounts of customer i
            for(int j = 0; j < accounts[i].size(); j++) {
                currentSum += accounts[i][j];
            }
            
            // update maximum wealth
            maxWealth = max(maxWealth, currentSum);
        }
        
        return maxWealth;
    }
};
