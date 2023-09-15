class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int greatest = 0;
        vector<bool> kids;
        for(const auto &candie :candies)
            if (candie > greatest)
                greatest = candie;
        
        for(const auto &candie :candies) {
            if (candie + extraCandies >= greatest)
                kids.push_back(true);
            else
                 kids.push_back(false);
        }
        return kids;
    }
};