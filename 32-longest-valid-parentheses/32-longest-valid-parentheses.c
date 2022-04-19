 
int longestValidParentheses(char * s){
	int i = 0;
	int a = 0;
    int c = 0;
    int z = 0;
    int x = 0;
    int q = 0;
    int len = strlen(s);
    char *stack = malloc(len + 1);
	while (s[i])
	{
		if (s[i] == '(')
        {
			stack[a++] = s[i];
            x++;
        }
        else if(a && s[i] == ')' && stack[a - 1] == '(')
        {
           stack[a--];
           c++;
            if (c == x)
            {
                z =  c * 2;
            } 
        }
        else
        {
            if (q <= z)
                q = z;
            c = 0;
            x = 0;
            z = 0;
        }
		i++;
	}
    if (q <= z)
        q = z;
    z = 0;
    i = 0;
    a = 0;
    x = 0;
    c = 0;
    free(stack);
    stack = malloc(len + 1);
    while(--len >= 0)
	{
		if (s[len] == ')')
        {
			stack[a++] = s[len];
            x++;
        }
        else if(a  && s[len] == '(' && stack[a - 1] == ')')
        {
            stack[a--];
            c++;
            if (c == x)
            {
                i = c * 2;
            } 
        }
        else
        {
             if (z <= i)
                z = i;
            c = 0;
            x = 0;
            i = 0;
        }       
	}
    if (z <= i)
        z = i;
    if (z >= q)
        return (z);
    return (q);
}
