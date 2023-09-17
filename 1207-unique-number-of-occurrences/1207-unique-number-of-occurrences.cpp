class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        std::unordered_map<int, int> hash_table;
        int occurrences[1001] = {0};
        for(auto num : arr)
            hash_table[num]++;
        for(auto number : hash_table)
            occurrences[number.second]++;
        for(int i = 0; i < 1000 ; i++)
             if (occurrences[i] != 1 && occurrences[i] != 0)
                return false;
        return true;
    }
};