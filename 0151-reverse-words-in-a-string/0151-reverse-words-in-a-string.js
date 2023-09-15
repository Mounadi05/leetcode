/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    
    return s.match(/\w+/g).reverse().join(" ");
};