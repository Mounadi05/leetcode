bool isValid(char * s){
	int i = 0;
	int a = 0;
    char *stack = malloc(strlen(s) + 1);
	while (s[i])
	{
		if (s[i] == '(' || s[i] == '{' || s[i] == '[')
			stack[a++] = s[i];
        else if(a && ((s[i] == ']' && stack[a - 1] == '[') ||(s[i] == ')' && stack[a - 1] == '(') ||( s[i] == '}' && stack[a - 1] == '{')))
			stack[a--];
        else
            return (false);
		i++;
	}
    return (!a);
}