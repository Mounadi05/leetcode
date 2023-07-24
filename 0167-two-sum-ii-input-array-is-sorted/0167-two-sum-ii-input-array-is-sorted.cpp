class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        pair<int,int> a;
        pair<int,int> b;
        int last = numbers.size()-1;
        int first = 0;
        while (first < last)
        {
            a = make_pair(numbers[first],first);
            b = make_pair(numbers[last],last);
            if ((a.first + b.first) > target)
                last--;
            else if ((a.first + b.first) < target)
                first++;
            else
                return  {a.second+1,b.second+1};

        }
        return  {a.second+1,b.second+1};
    }
};