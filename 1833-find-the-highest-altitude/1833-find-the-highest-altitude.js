/**
 * @param {number[]} gain
 * @return {number}
 */
var largestAltitude = function(gain) {
    var arr = [0];
    for (let i= 0; i < gain.length;i++)
        arr.push(arr[i]+gain[i]);
    return Math.max(...arr);
};

 