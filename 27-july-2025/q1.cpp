//2210. Count Hills and Valleys in an Array
class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector<int> ans;
        ans.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != ans.back())
                ans.push_back(nums[i]);
        }
        int valleys = 0;
        int hill = 0;
        int n = ans.size();
        int a = 0, b = 0, c = 0;
        for (int i = 1; i < n - 1; i++) {
            a = i - 1, b = i, c = i + 1;
            if (ans[a] < ans[b] && ans[b] > ans[c])
                hill += 1;

            if (ans[a] > ans[b] && ans[b] < ans[c])
                valleys += 1;
        }
        cout << hill << " ";
        cout << valleys << " ";
        return hill + valleys;
    }
};