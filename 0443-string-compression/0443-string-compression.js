/**
 * @param {character[]} chars
 * @return {number}
 */
var compress = function(chars) {
    let current = chars[0];
    let count = 1;
    let flag = 0;
    for(let i = 1; i < chars.length;i++)
    {
        if (chars[i] == current)
            count++;
        else
            {
                chars[flag++] = current;
                current = chars[i];
                if(count > 1)
                {
                    const str = count.toString();
                    for(let i = 0; i < str.length;i++)
                        chars[flag++] = str[i];
                }
                count = 1;
            }
    }
    chars[flag++] = current
    if(count > 1)
    {
        const str = count.toString();
        for(let i = 0; i < str.length;i++)
            chars[flag++] = str[i];
    }
    return flag;
};