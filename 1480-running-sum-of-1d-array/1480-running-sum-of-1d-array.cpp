class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        
        vector<int> running(n);
        running[0]=nums[0];
        for(int i=1;i<n;i++){
            
                running[i]=nums[i]+running[i-1];
            }
            
        
        return running;
        
    }
};









// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> running(n);   // allocate space for n elements
//         running[0] = nums[0];     // first element is same as nums[0]

//         for(int i = 1; i < n; i++) {
//             running[i] = running[i-1] + nums[i];  // cumulative sum
//         }

//         return running;
//     }
// };
