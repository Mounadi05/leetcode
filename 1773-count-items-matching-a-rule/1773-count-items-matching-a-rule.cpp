class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int index = 0;
        if (ruleKey == "type") index = 0;
        if (ruleKey == "color") index = 1;
        if (ruleKey == "name") index = 2;
        int counter = 0;
        for(vector<string> &item : items)
            if (item[index] == ruleValue)
                counter++;
        return counter;
    }
};