//2419. Longest Subarray With Maximum Bitwise AND

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxx =-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxx) maxx=nums[i];
        }
        int count =0;
        int ans=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==maxx){
                count++;
            }
            else{
                count =0;
            }
            ans = max(ans,count);
        }
      return ans;  
    }
};