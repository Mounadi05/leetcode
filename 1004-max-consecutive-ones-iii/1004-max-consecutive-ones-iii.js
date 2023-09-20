/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var longestOnes = function(nums, k) {
    let window = 0, lastZero = 0,counteZero = 0;
    for(let i = 0; i < nums.length ; i++)
     {
        if (!nums[i]) counteZero++;
        while(counteZero > k)
        {
            if (!nums[lastZero]) counteZero--;
            lastZero++;
        }
        window = Math.max(window,i - lastZero + 1);
     }
    return window;
};