class Solution {
public:
    vector<int> getRow(int rowIndex) {
    vector<vector<int>> result;
    for(int i = 0; i <= rowIndex;i++)
    {
        if (i == 0) result.push_back({1});
        else
        {
            vector<int> tmp;
            tmp.push_back(1);
            for(int j = 1; j < i;j++)
                tmp.push_back(result[i-1][j-1] + result[i-1][j]);
            tmp.push_back(1);
            result.push_back(tmp);
        }
    }
    return result[rowIndex]; 
    }
};