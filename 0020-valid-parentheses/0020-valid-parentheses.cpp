class Solution {
public:
    bool isValid(string s) {
stack<char> st;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            char c = s[i];
            
            // Push opening brackets onto the stack
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            else {
                // If closing bracket arrives but stack is empty, it's invalid
                if (st.empty()) {
                    return false;
                }

                char ch = st.top();
                // Check if top matches the current closing bracket
                if ((ch == '(' && c == ')') ||
                    (ch == '{' && c == '}') ||
                    (ch == '[' && c == ']')) {
                    st.pop();
                } else {
                    return false; // Mismatched brackets (e.g., "(]")
                }
            }
        }

        // Valid only if all opened brackets were properly matched and popped
        return st.empty();
    }
};