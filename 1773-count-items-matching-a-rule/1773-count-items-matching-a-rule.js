/**
 * @param {string[][]} items
 * @param {string} ruleKey
 * @param {string} ruleValue
 * @return {number}
 */
var countMatches = function(items, ruleKey, ruleValue) {
       let index = 0;
        if (ruleKey == "type") index = 0;
        if (ruleKey == "color") index = 1;
        if (ruleKey == "name") index = 2;
        let counter = 0;
        for(item of items)
            if (item[index] == ruleValue)
                counter++;
        return counter;
    } 
 