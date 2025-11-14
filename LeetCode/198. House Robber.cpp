class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        int prev2 = 0;
        int prev1 = 0; 

        for (const int current_house_money : nums) {
        
            int current_max_money = std::max(prev1, prev2 + current_house_money);
            prev2 = prev1; 
            prev1 = current_max_money;
        }
        return prev1;
    }
};