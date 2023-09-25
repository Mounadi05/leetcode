 class Solution {
public:
    string decodeString(string s) {
        stack<string> word;
        stack<int> number;
        string w;
        string result;
        for (int i = 0; i < s.size(); i++)
        {
            if (isdigit(s[i])) 
            {
                int n = 0;
                while (isdigit(s[i])) n = n * 10 + s[i++] - '0';
                number.push(n);
                i--;   
            } 
            else if (s[i] == '[')  word.push("[");
            else if (s[i] == ']') 
            {
                w.clear();
                while (!word.empty() && word.top() != "[") 
                {
                    w = word.top() + w;
                    word.pop();
                }
                word.pop();   
                int n = (number.empty()) ? 1 : number.top();
                number.pop();
                string temp = w;
                while (n-- > 1) w += temp;
                word.push(w);
            } 
            else 
            {
                string token;
                while (isalpha(s[i])) token += s[i++];
                word.push(token);
                i--;   
            }
        }

        while (!word.empty()) 
        {
            result = word.top() + result;
            word.pop();
        }

        return result;
    }
};

        