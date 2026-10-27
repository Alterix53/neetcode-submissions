class Solution {
public:

    string encode(vector<string>& strs) {
        string ec = "";
        for (string s: strs) {
            int l = s.length();
            string temp = to_string(l) +'#' + s;
            ec += temp;

        }
        return ec;
    }

    vector<string> decode(string s) {
        int p = 0;
        vector<string> ans;
        while (p < s.length()) {
            int l = 0;
            while (isalnum(s[p])) {
                l = l * 10 + s[p] - '0';
                p++;
            }
            p++; // skip the #;
            ans.push_back(s.substr(p, l));
            p+=l;
        }
        return ans;
    }
};
