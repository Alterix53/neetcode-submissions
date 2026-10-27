class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> mp;
        for (int n: nums) {
            mp[n] ++;
        } 
        vector<int> keys;

        for (auto& [key, freq] : mp) {
            keys.push_back(key);
        }


        sort(keys.begin(), keys.end(), [&](int a, int b) {
            return mp[a] > mp[b];
        });
        vector <int> res;
        for (int i = 0; i < k; i++) {
            res.push_back(keys[i]);
        }
        return res;
    }
};
