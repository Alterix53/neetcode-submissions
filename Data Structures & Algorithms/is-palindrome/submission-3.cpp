class Solution {
public:
    // ham chuan hoa
    string normalize(string s) {
        string res = "";
        for (char c: s) {
            if (isalnum(c))
                res += tolower(c);
        }
        return res;
    }
    bool isPalindrome(string s) {
        string r = normalize(s); 
        int j = r.length() - 1;
        int i = 0;
        while (i < j) {
            if (r[i] != r[j]) 
                return false;
            i++; j--;
        }
        return true;
    }
};
