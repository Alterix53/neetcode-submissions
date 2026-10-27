class Solution {
public:
    bool isAnagram(string s, string t) {
        // if (s.length() != t.length())
        //     return false;
        // int a[27]; 
        // for (int i = 0; i < 27; i++) {
        //     a[i] = 0;
        // }
        // for (int i = 0; i < s.length(); i++) {
        //     a[s[i] - 'a']++;
        //     a[t[i]- 'a']--;
        // }
        // for (int i = 0; i < 27; i++) {
        //     if (a[i] != 0)
        //         return false;
        // }
        // return true;
        
        // create an hashmap with this:
        // key: current char in the strings
        // value: number of that char in the strings
        if (s.size() != t.size())
            return false;
        std::unordered_map<int, int> h1, h2;
        for (int i = 0; i < s.size(); i++)
        {
            h1[s[i]]++;
            h2[t[i]]++;

        }
        return h1 == h2;
    }
};
