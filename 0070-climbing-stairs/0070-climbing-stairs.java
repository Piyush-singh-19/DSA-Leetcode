class Solution {
    public int climbStairs(int n) {
        if (n <= 2) return n;  // base cases: 1 → 1 way, 2 → 2 ways
        
        int a = 1, b = 2;  // ways to reach step 1 and 2
        for (int i = 3; i <= n; i++) {
            int c = a + b;  // recurrence relation
            a = b;
            b = c;
        }
        return b;
    }
}
