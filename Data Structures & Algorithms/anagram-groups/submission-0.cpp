class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> mp;

        // xu ly tung string
        for (string s: strs) {

            // lay gia tri key cua mang
            string temp = "";
            vector <int> v(26);
            for (char c: s) {
                v[int(c - 'a')]++;
            }
            for (int i = 0; i < 26; i++) {
                temp+= to_string(v[i]) + '#';
            }

            mp[temp].push_back(s);
        }

        vector<vector<string>> ans;
        for (auto [key, values] : mp) {
            ans.push_back(values);
        }
        return ans;
    }
};
