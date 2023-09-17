/**
 * @param {number[]} nums
 * @return {number}
 */
var pivotIndex = function(nums) {
  
    const total = nums.reduce((total, num) => total += num)
    let leftTotal = 0;
    for(let i = 0; i < nums.length;i++)
    {
        leftTotal += nums[i];
        if ((total - leftTotal) == (leftTotal -nums[i]))
            return i;
    }
    return -1;
};