/**
 * @param {string} s
 * @return {string}
 */
var reverseVowels = function(s) {
    var arr = s.split("");
    let max = s.length - 1;
    let i = 0;
    var vowels = "aAeEiIoOuU";
    while(i <= max)
    {
        if(vowels.includes(arr[i]) && vowels.includes(arr[max]))
        {
           [arr[i],arr[max]] = [arr[max],arr[i]]
            i++, max--;
        }
        if (!vowels.includes(arr[i])) i++;
        if (!vowels.includes(arr[max])) max--;
    }
    return arr.join("");
};