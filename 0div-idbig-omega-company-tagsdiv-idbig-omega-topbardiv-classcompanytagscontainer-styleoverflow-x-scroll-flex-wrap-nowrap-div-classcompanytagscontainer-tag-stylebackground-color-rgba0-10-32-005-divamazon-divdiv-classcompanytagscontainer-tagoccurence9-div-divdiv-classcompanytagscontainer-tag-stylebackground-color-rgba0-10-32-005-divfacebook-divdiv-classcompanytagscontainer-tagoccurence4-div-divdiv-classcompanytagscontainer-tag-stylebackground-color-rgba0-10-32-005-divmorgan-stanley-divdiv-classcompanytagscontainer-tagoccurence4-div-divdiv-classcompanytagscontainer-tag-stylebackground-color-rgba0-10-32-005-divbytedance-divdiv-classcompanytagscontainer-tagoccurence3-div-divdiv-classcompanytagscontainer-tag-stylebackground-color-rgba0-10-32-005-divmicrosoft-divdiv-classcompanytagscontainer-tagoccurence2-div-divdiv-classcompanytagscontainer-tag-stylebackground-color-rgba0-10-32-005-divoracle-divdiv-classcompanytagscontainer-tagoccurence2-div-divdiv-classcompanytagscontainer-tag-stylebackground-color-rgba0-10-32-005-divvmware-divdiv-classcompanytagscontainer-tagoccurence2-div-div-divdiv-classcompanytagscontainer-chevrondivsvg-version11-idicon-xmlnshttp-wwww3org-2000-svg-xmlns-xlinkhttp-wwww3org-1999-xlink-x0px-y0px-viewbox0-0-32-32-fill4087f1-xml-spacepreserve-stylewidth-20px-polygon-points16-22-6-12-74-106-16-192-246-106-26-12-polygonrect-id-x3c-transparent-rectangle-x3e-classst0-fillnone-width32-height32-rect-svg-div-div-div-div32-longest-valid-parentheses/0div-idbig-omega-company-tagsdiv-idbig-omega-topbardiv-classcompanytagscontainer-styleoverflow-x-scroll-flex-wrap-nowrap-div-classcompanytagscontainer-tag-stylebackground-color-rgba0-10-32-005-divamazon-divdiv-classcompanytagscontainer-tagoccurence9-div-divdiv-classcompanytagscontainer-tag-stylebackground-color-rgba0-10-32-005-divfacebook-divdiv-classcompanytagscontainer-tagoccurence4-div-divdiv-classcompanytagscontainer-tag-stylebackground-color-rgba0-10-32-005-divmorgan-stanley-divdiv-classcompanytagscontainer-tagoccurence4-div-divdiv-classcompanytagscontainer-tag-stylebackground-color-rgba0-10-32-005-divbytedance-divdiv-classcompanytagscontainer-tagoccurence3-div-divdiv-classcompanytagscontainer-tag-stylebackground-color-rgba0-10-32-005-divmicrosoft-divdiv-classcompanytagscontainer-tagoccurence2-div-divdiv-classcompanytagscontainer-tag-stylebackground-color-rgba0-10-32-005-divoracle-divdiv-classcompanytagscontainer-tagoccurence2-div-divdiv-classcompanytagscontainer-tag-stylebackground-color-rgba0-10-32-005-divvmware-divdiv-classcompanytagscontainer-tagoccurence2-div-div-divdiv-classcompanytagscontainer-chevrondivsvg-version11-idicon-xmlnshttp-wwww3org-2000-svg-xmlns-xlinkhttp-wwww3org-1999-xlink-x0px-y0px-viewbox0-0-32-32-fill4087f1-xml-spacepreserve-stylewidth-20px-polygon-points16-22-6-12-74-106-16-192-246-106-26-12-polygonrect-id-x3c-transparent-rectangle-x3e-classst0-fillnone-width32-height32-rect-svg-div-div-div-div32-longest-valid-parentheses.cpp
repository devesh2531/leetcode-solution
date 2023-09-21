class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        int maxLen = 0;
        int start = -1; // Marker for the start of the valid substring

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push(i);
            } else {
                if (st.empty()) {
                    // Unmatched ')', update the start marker
                    start = i;
                } else {
                    st.pop();
                    if (st.empty()) {
                        // The stack is empty, so the substring from start to i is valid
                        maxLen = max(maxLen, i - start);
                    } else {
                        // There are unmatched '(' left in the stack
                        maxLen = max(maxLen, i - st.top());
                    }
                }
            }
        }

        return maxLen;
    }
};
