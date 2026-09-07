class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int add=0;
        for(int i=0;i<n;i+=2){
            sum+=nums[i];

        }
        for(int i=1;i<n;i+=2){
            add+=nums[i];
        }

        return sum-add;
        
    }
};