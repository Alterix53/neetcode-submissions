class Solution {
public:
    bool isValid(string s) {
        stack <char> mystack;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[')
                mystack.push(c);
            else {
            // in case the stack is empty
            if (mystack.empty())
                return false;
            
            if ((c == ')' && mystack.top() == '(') ||
                (c == ']' && mystack.top() == '[') || 
                (c == '}' && mystack.top() == '{'))
                mystack.pop();
            else
                return false;
            }
        }
        return mystack.empty();
    }
};
