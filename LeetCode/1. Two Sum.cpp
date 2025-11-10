class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        mp.reserve(nums.size());       // ✅ 提前配置空間，避免 rehash
        mp.max_load_factor(0.7);       // ✅ 降低碰撞率，稍微快一些

        for (int i = 0; i < (int)nums.size(); ++i) {
            int diff = target - nums[i];
            auto it = mp.find(diff);
            if (it != mp.end()) {
                return {it->second, i}; // ✅ 找到組合
            }
            mp[nums[i]] = i;            // ✅ 記錄當前值與索引
        }
        return {}; // 不會發生（題目保證有解）
    }
};