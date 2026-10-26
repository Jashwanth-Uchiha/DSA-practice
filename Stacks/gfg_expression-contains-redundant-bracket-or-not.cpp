class Solution {
public:
    bool checkRedundancy(string &s) {
        stack<char> st;

        for(int i = 0; i < s.length(); i++) {

            if(s[i] == '(' || s[i] == '+' || s[i] == '-' ||
               s[i] == '/' || s[i] == '*') {
                st.push(s[i]);
            }

            else if(s[i] == ')') {

                bool hasOperator = false;

                while(!st.empty() && st.top() != '(') {
                    if(st.top() == '+' || st.top() == '-' ||
                       st.top() == '/' || st.top() == '*') {
                        hasOperator = true;
                    }
                    st.pop();
                }

                st.pop();   // remove '('

                if(!hasOperator)
                    return true;
            }
        }

        return false;
    }
};