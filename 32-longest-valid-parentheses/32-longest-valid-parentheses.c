
int check(char *s, int size)
{
    int i = 0,x = 0, q = 0,c = 0, z = 0,a = 0;
    char *stack = malloc(size + 1);
    while (s[i])
	{
		if (s[i] == '(' && ++x)
            stack[a++] = s[i];
        else if(a && s[i] == ')' && stack[a - 1] == '(' && ++c)
        {
           stack[a--];
            if (c == x)
                z =  c * 2;
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
    return (z >= q ? z : q);
}

int reverse_check(char *s, int len)
{
    int x = 0, q = 0,c = 0, z = 0,a = 0;
    char *stack = malloc(len + 1);
    while(--len >= 0)
	{
		if (s[len] == ')' && ++x)
			stack[a++] = s[len];
        else if(a  && s[len] == '(' && stack[a - 1] == ')' && ++c)
        {
            stack[a--];
            if (c == x)
                q = c * 2;
        }
        else
        {
            if (z <= q)
                z = q;
            c = 0;
            x = 0;
            q = 0;
        }       
	}
    return (z >= q ? z : q);
}
int longestValidParentheses(char * s){
    int size =strlen(s);
    int a = check( s, size);
    int b = reverse_check(s, size);
    return(a >= b ? a : b); 
}