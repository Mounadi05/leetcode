/**
 * @param {number[][]} items1
 * @param {number[][]} items2
 * @return {number[][]}
 */
var mergeSimilarItems = function(items1, items2) {
    var item = {};
    for(let i = 0;i < items1.length;i++)
        if (!item.hasOwnProperty(items1[i][0]))
            item[items1[i][0]] = items1[i][1];
        else
            item[items1[i][0]] += items1[i][1];
    
    for(let i = 0;i < items2.length;i++)
        if (!item.hasOwnProperty(items2[i][0]))
            item[items2[i][0]] = items2[i][1];
        else
            item[items2[i][0]] += items2[i][1];
    
    var result = [];
    for(let key in item)
        result.push([key,item[key]]);
    return result;
};