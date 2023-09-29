class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int> items;
        vector<vector<int>> result;
        for(int i = 0; i < items1.size();i++)
            items[items1[i][0]] +=items1[i][1];
        for(int i = 0; i < items2.size();i++)
            items[items2[i][0]] +=items2[i][1];
        for(auto item : items)
        {
            vector<int> i(1,item.first);
            i.push_back(item.second);
            result.push_back(i);
        }
        return result;
        
    }
};