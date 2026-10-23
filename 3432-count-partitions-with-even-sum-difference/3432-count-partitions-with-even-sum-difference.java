class Solution {
    public int countPartitions(int[] nums) {
        int totalSum = 0;
        for (int x : nums) {
            totalSum += x;
        }
        
        // If the total sum is even, all (n - 1) partitions have an even difference.
        // If the total sum is odd, no partition can have an even difference.
        return (totalSum % 2 == 0) ? nums.length - 1 : 0;
    }
}