
import java.util.*;

class Solution {
    public int sumCounts(List<Integer> nums) {
        int n = nums.size();
        int sum = 0;

        for (int i = 0; i < n; i++) {
            List<Integer> seen = new ArrayList<>();

            for (int j = i; j < n; j++) {
                boolean found = false;

                for (int k = 0; k < seen.size(); k++) {
                    if (seen.get(k).equals(nums.get(j))) {
                        found = true;
                        break;
                    }
                }

                if (found == false) {
                    seen.add(nums.get(j));
                }

                int count = seen.size();
                sum = sum + count * count;
            }
        }

        return sum;
    }
}
