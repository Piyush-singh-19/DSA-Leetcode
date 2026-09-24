class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> ans=nums;
        // vector<int>ans(2*nums.size());
        for(int i=nums.size()-1;i>=0;i--){
            ans.push_back(nums[i]);

            
        }
        return ans;
        
    }
};