function isSubsequence(s: string, t: string): boolean {
    let i:number = 0;
    for(let j:number = 0 ; j < t.length ; j++)
        if (s[i] && s[i] == t[j])i++;
    return !(i < s.length);
};