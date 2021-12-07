class Solution
{
public:
    // Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> st;

        for (auto it : x)
        {
            if (it == '{' || it == '(' || it == '[')
            {
                st.push(it);
            }
            else
            {
                if (st.size() == 0)
                    return false;

                // Extracting the topmost character to compare
                char ch = st.top();

                if ((it == ')' and ch == '(') or (it == ']' and ch == '[') or (it == '}' and ch == '{'))
                    st.pop();
                else
                    return false;
            }
        }
        return st.empty();
    }
};