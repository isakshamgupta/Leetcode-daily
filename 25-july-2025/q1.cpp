// 3487. Maximum Unique Subarray Sum After Deletion
class Solution {
public:
    int maxSum(vector<int>& nums) {
        // sum of all unique values that are greater than or equal to zero.
        int sum = 0;
        set<int> a;
        for (int i = 0; i < nums.size(); i++) {
            a.insert(nums[i]);
        }
        for (int num : a) {
            if (num > 0) {
                sum += num;
            }
        }
        int minn = 101;
        int maxx = -101;
        if (sum <= 0) {
            for (int num : a) {
                if (num > maxx)
                    maxx = num;
                if (num < minn)
                    minn = num;
            }
            if (maxx < 0)
                sum = maxx;
        }
        return sum;
    }
};