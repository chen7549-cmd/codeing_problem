class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> dp(nums.size());
        int max = nums[0];
        if (nums[0] > 0) dp[0]=nums[0];
        else dp[0] = 0;
        for (int i = 1; i < nums.size(); i++){
            if (dp[i-1]+nums[i] <= 0){
                if (dp[i-1]+nums[i] > max){
                    max = dp[i-1]+nums[i];
                    continue;
                }
                dp[i]= 0;
                continue;
            }
            dp[i]=dp[i-1]+nums[i];
            if (dp[i] >= max) max = dp[i];
        }
        return max;
    }
};
