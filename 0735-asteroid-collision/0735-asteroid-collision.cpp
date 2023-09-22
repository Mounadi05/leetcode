class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> result;
        for(int i = 0; i < asteroids.size();i++)
        {
            if (result.empty() ||  asteroids[i] > 0)
                result.push_back(asteroids[i]);
            else if (result.empty() || ( asteroids[i] < 0 && result.back() < 0 ))
                    result.push_back(asteroids[i]);
            else
            {
                while(!result.empty() && asteroids[i] < 0  && result.back() > 0 && result.back() < abs(asteroids[i]))
                    result.erase(result.end() -1);
                if (!result.empty() && result.back() > 0 && result.back() == abs(asteroids[i]))
                    result.erase(result.end() -1);
                else if (result.empty() || result.back() < 0)
                    result.push_back(asteroids[i]);
            }
           
        }
        return result;
    }
};