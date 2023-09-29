function mergeSimilarItems(items1: number[][], items2: number[][]): number[][] {
  var item:object= {};
    for(let i:number = 0;i < items1.length;i++)
        if (!item.hasOwnProperty(items1[i][0]))
            item[items1[i][0]] = items1[i][1];
        else
            item[items1[i][0]] += items1[i][1];
    
    for(let i:number = 0;i < items2.length;i++)
        if (!item.hasOwnProperty(items2[i][0]))
            item[items2[i][0]] = items2[i][1];
        else
            item[items2[i][0]] += items2[i][1];
    
    var result : number[][] = [];
    for(let key in item)
        result.push([key,item[key]]);
    return result;
};