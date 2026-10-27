class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map <int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            // find the num i in the list
            // if not found yet, add in the hash map
            if (m.find(nums[i]) != m.end()) 
                return true;
            m[nums[i]]++; 
        }
        return false;
    }
};
