class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> hash;
        for(int num : nums)
            if (!(num%2))
            hash[num]++;
        pair<int, int> one(-1,0);
        for(auto num:  hash)
            if(num.second > one.second)
                one = num;
        return one.first;
        
     }
};