class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        int digit=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            while(nums[i]>0){
                // int digit=0;    
            // digit=i%10;
            digit=digit+nums[i]%10;
            nums[i]=nums[i]/10;
            }
        }
        return sum-digit;
        
    }
};