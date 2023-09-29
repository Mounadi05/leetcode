/**
 * @param {number[]} nums
 * @return {boolean}
 */
var isMonotonic = function(nums) {
     var increasing;
    for(let i = 1; i < nums.length;i++)
    {
        if (nums[i - 1] < nums[i])
        {
            increasing = true;
            break;
        }
        else if (nums[i - 1] > nums[i])
        {
            increasing = false;
            break;
        }      
    }
    if (increasing)
        return nums.every((num,index) =>{
           if (index > 0)
              if (nums[index - 1] > nums[index])
                  return false;
            return true;
        })
    else
        return nums.every((num,index) =>{
           if (index > 0)
              if (nums[index - 1] < nums[index])
                  return false;
            return true;
        })
};