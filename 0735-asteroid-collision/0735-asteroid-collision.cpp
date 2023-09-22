class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> result;
        for(int asteroid: asteroids)
        {
            if (asteroid > 0)
                result.push_back(asteroid);
            else
            {
                while(!result.empty() && asteroid < 0  && result.back() > 0 && result.back() < abs(asteroid))
                    result.pop_back();
                if (!result.empty() && result.back() > 0 && result.back() == abs(asteroid))
                    result.pop_back();
                else if (result.empty() || result.back() < 0)
                    result.push_back(asteroid);
            }
           
        }
        return result;
    }
};