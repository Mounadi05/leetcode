/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var maxOperations = function(nums, k) {
    var pairs = new Map();
    let operation = 0;
    for(let num of nums)
    {
      if (pairs.get(k - num) > 0)
      {
            operation++;
            pairs.set(k - num, pairs.get(k - num) - 1); 
      }
      else 
        pairs.set(num, (pairs.get(num) || 0) + 1); 
    }
    return operation ;
};