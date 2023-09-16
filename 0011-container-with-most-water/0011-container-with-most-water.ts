function maxArea(height: number[]): number {
    let left:number = 0;
    let right:number = height.length - 1;
    let result:number = (right - left)*Math.min(height[left],height[right]);
    while (left <= right)
    {
        result = Math.max((right - left)*Math.min(height[left],height[right]),result);
        if (height[right] < height[left]) right--;
        else left++;
    }
    return result;
};