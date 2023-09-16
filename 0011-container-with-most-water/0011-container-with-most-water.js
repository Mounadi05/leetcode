/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function(height) {
      let left = 0;
    let right = height.length - 1;
    let result = (right - left)*Math.min(height[left],height[right]);
    while (left <= right)
    {
        result = Math.max((right - left)*Math.min(height[left],height[right]),result);
        if (height[right] < height[left]) right--;
        else left++;
    }
    return result;
};