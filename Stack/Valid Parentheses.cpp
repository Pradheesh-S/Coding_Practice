Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

1.Open brackets must be closed by the same type of brackets.
2.Open brackets must be closed in the correct order.
3.Every close bracket has a corresponding open bracket of the same type.

  
  Ans:

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i < s.length();i++)
        {
            char c = s[i];
            if(c=='('||c=='['||c=='{')
            {
                st.push(c);
            }
            else
            {
                if(st.empty()) return false;
                if (c == ')' && st.top() != '(') return false;
                if (c == '}' && st.top() != '{') return false;
                if (c == ']' && st.top() != '[') return false;
                st.pop();
            }
        }
        return st.empty();
    }
};
