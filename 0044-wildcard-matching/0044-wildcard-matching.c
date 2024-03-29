 bool check(char * s, char * p,int i,int j,int ** memo)
{
    if (memo[i][j]) return false;
    memo[i][j] = 1;
    if (!s[i] && !p[j]) return true;
    if (p[j] &&  p[j] == '*' && !p[j + 1] && !s[i]) return true;
    if(s[i] && p[j] && (s[i]  == p[j] || (p[j] && p[j] == '?'))) return !memo[i+1][j+1] && check(s,p,i+1,j+1,memo);
    if(p[j] == '*') 
         return ( !memo[i][j+1] && check(s,p,i,j+1,memo))||(s[i] && !memo[i+1][j] && check(s,p,i+1,j,memo) );
    return  false;
}
bool isMatch(char * s, char * p)
{
    int m = strlen(s);
    int n = strlen(p);
    
    int ** memo = (int **)malloc((m + 1) * sizeof(int *));
    for(int i = 0; i <= m; i++) {
        memo[i] = (int *)malloc((n + 1) * sizeof(int));
        memset(memo[i], 0, (n + 1) * sizeof(int));
    }
    return check(s, p, 0, 0, memo);

} 
  