class Solution {
public:
    void separy(int n , vector<char> & str)
    {
        vector<char> s;
        while(n > 0)
        {
            s.push_back(n%10+48);
            n /=10;
        }
        while(!s.empty())
        {
            str.push_back(s.back());
            s.pop_back();
        }
    }
    int compress(vector<char>& chars) {
        vector<char> res;
        char tmp;
        int counter = 0;
        for(int i = 0; i < chars.size() ; i++)
        {   if (i != 0 && chars[i] != tmp && counter > 1)
                separy(counter, res);
            if (i == 0 || chars[i] != tmp)
            {    
                res.push_back(chars[i]);
                tmp = chars[i];
                counter = 1;
            }
            else
                counter++;
        }
        if (counter > 1)
            separy(counter,res);
        chars = res;
        return res.size();
    }
};