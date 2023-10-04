class Solution {
public:
    // void checkProvince(int city,vector<vector<int>>& isConnected, vector<bool> &visited)
    // {
    //     visited[city] = true;
    //     for(int i = 0; i < isConnected.size();i++)
    //         if(isConnected[city][i] && !visited[i])
    //             checkProvince(i, isConnected,visited);
    // }
    // int findCircleNum(vector<vector<int>>& isConnected) {
    //     int counter = 0;
    //     vector<bool> visited(isConnected.size());
    //     for(int i = 0; i < isConnected.size();i++)
    //     {
    //         if(!visited[i]) counter++;
    //         checkProvince(i, isConnected,visited);
    //     }
    //     return (counter);
    // }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int province = 0;
        vector<bool> visited(n,false);
        queue<int> node;
        for(int i = 0; i < n ; i++)
        {
            node.push(i);
            if(!visited[i]) province++;    
            while(!node.empty())
            {
                int city = node.front();
                node.pop();
                visited[city] = true;
                for(int j = 0; j < n ; j++)
                    if(isConnected[city][j] && !visited[j])
                        node.push(j);
            }
        }
        return province;
    }
    
};

 
