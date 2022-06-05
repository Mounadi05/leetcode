  class Solution {
public:
    bool isValid(string s) {
    stack<char> stack;
    int i = -1;
	while (s[++i])
	{
		if (s[i] == '(' || s[i] == '{' || s[i] == '[')
			stack.push(s[i]);
        else if(!stack.empty() && ((s[i] == ']' && stack.top() == '[') || (s[i] == ')' && stack.top() == '(') ||( s[i] == '}' && stack.top() == '{')))
			stack.pop();
        else
            return (false);
	}
    return (stack.empty());
    }
};
