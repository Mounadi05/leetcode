class Solution {
public:
    string digitSum(string s, int k) {
        if(s.size() <= k) return s;
        else
        {
            string tmp;
            for(int i = 0; i < s.size(); i+=k)
            {
                int sum = 0;
                for(int j = i; j < k+i && j < s.size();j++)
                    sum += s[j] - 48;
                tmp += to_string(sum);
            }
            return digitSum(tmp, k);
        }
    }
};