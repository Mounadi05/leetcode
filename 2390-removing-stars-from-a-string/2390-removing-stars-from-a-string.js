/**
 * @param {string} s
 * @return {string}
 */
var removeStars = function(s) {
    var result = [];
    for(let c of s)
        if (c == '*') result.pop();
        else result.push(c);
    return result.join('');
};