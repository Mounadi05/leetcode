class Solution {
public:
    // int findCenter(vector<vector<int>>& edges) {
    //     map<int, vector<int>> stars;
    //     for(auto edge: edges)
    //     {
    //         stars[edge[0]].push_back(edge[1]);
    //         stars[edge[1]].push_back(edge[0]);
    //     }
    //     pair<int,int>center = {0,-1};
    //     for(auto star: stars)
    //     {
    //         if(star.second.size() > center.first)
    //         {
    //             center.first = star.first;
    //             center.second = star.second.size();
    //         }
    //     }
    //     return center.first;
    // }
      int findCenter(vector<vector<int>>& edges) {
        return edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1] ? edges[0][0] : edges[0][1];
      }

    
};