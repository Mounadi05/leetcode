class Solution {
public:
    string removeDuplicates(string s, int k) 
    {
        stack<pair<char, int>> st;
        for (char c : s) 
        {
            if (st.empty() || st.top().first != c) 
                st.push({c, 1});
            else 
            {
                st.top().second++;
                if (st.top().second == k)
                    st.pop();
            }
        }
        string result;
        while (!st.empty()) 
        {
            for (int i = 0; i < st.top().second; i++) 
                result += st.top().first;
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};