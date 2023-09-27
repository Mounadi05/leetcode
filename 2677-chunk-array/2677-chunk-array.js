/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {
 
    var result = [];
    for(let i = 0 ; i < arr.length;i +=size)
         result.push(arr.slice(i,size+i));
     return result;
};
