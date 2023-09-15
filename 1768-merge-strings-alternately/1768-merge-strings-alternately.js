/**
 * @param {string} word1
 * @param {string} word2
 * @return {string}
 */
var mergeAlternately = function(word1, word2) {
    var merge  = '';
    let i = 0;
    let j = 0;
    while(i < word1.length || j < word2.length)
    {
        if (i < word1.length) merge += word1[i++];
        if (j < word2.length) merge += word2[j++];
    }
    return merge
};