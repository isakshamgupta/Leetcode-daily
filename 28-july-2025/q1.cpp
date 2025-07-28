//2044. Count Number of Maximum Bitwise-OR Subsets
class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int maxor = 0, res = 0;
        
        // Step 1: Find the maximum OR possible
        for (int num : nums) {
            maxor |= num;
        }

        int n = nums.size();

        // Step 2: Generate all subsets using bitmasking
        for (int mask = 1; mask < (1 << n); ++mask) { // 1 to 2^n - 1 (non-empty)
            int curr_or = 0;
            for (int i = 0; i < n; ++i) {
                if (mask & (1 << i)) {
                    curr_or |= nums[i];
                }
            }
            if (curr_or == maxor) res++;
        }

        return res;
    }
};
