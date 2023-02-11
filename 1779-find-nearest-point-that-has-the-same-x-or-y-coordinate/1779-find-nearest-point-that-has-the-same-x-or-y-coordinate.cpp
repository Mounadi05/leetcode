class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
    int dist = INT_MAX, index = -1;
        int x1, y1;
        for(int i = 0; i < points.size(); i++)
        {
            x1 = points[i][0] , y1= points[i][1];
            int d = abs(x1-x) + abs(y1-y);
            if (d < dist && (x == x1 || y1 == y))
                index = i,dist = d;
        }
        return index;
    }
};