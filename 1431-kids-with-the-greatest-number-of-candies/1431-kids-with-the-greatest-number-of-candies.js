/**
 * @param {number[]} candies
 * @param {number} extraCandies
 * @return {boolean[]}
 */
var kidsWithCandies = function(candies, extraCandies) {
    const greatest =  Math.max(...candies);
    var kids = [];
    candies.forEach(candie =>{
        if(candie + extraCandies >=  greatest)
            kids.push(true);
        else
            kids.push(false);      
    })
    return kids;
};