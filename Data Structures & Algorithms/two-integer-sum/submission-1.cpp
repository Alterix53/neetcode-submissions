class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> diff;
        for (int i = 0; i < (int) nums.size(); i++) {
            // tính toán giá trị diff
            int difValue = target - nums[i];
            // tìm giá trị diff đã có chưa
            // nếu có, trả về kết quả
            if (diff.find(nums[i]) != diff.end()) {
                return {diff[nums[i]], i};
            }
            // nếu chưa, lưu rằng đã có giá trị diff là d trong
            diff[difValue] = i; 
        }
        return {};
    }
};
