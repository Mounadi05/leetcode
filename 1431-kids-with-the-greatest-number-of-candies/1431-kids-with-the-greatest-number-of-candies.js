/**
 * @param {number[]} candies
 * @param {number} extraCandies
 * @return {boolean[]}
 */
var kidsWithCandies = function(candies, extraCandies) {
    const greatest =  Math.max(...candies);
    var kids = candies.map(candie => candie + extraCandies >=  greatest)
    return kids;
};