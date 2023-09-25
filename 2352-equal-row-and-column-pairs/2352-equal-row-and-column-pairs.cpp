class Solution {
public:
 int equalPairs(vector<vector<int>>& grid) {
 ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    vector<vector<int>> reverseGrid(grid.size(), vector(grid.size(), 0));
    
     for(int i = 0; i < grid.size(); i++)
        for(int j = 0; j < grid.size(); j++)
            reverseGrid[i][j] = grid[j][i];
    int count(0);
     for(int i = 0; i < grid.size();i++)
        for(int j = 0; j < grid.size(); j++)
             if (grid[i] == reverseGrid[j])
                 count++;
     return count;
    }

};