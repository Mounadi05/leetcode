/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {
        //console.log(arr.splice(0,1));

    var result = [];
    for(let i = 0 ; i < arr.length;i +=size)
    {
         result.push(arr.slice(i,size+i));
    }
     return result;
};
