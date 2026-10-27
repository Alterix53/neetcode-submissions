class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // create a hash map
        // key: the value of a number
        // value: the index of a number
        std::unordered_map<int,int> diff;
        for (int i = 0; i < nums.size(); i++) {
            int dif = target - nums[i];
            if (diff.find(nums[i]) != diff.end()) {
                return {diff[nums[i]], i};
            }
            diff[dif] = i;
        }
        return {};
    }
};
/* cho một dãy số và một số target, trả về index i và j sao cho:
i khác j
num[i] + num[j] == target

initial idea:
run 2 for-loops to find the only pair of i, j so that works
for (int i = 0; i < nums.size(); i++) {
    for (int j = i + 1; j < nums.size(); j++) {
        if (nums[i] + nums[j] == target)
            return i, j
    }
}
*/