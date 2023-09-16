/**
 * @param {number[]} nums
 * @return {boolean}
 */
var increasingTriplet = function(nums) {
    let i = Number.MAX_VALUE;
    let j = Number.MAX_VALUE;
    for(const k of nums)
        if (k <= i) i = k;
        else if (k <= j) j = k;
        else return true;
    return false;
    
};