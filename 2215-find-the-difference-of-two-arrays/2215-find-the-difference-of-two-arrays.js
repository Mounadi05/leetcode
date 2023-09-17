/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[][]}
 */
var findDifference = function(nums1, nums2) {
    let Diff = new Array([],[]);
    const set1 = nums1.filter((num , index) => {
        return nums1.indexOf(num) == index;
    });
     const set2 = nums2.filter((num , index) => {
        return nums2.indexOf(num) == index;
    });
    for(let i = 0; i < set1.length; i++)
        if (!set2.includes(set1[i])) 
            Diff[0].push(set1[i]);

    for(let i = 0; i < set2.length; i++)
        if (!set1.includes(set2[i]))
            Diff[1].push(set2[i]);
    return Diff;
};