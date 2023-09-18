class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        for(int i = 0; i < flowerbed.size(); i++)
        {
            if (flowerbed[i] == 0)
            {
                bool nextEmpty = ( i == flowerbed.size() - 1 || flowerbed[i + 1] == 0);
                bool prevEmpty = (i == 0 || flowerbed[i-1] == 0);
                if (nextEmpty && prevEmpty)
                    n--,flowerbed[i] = 1;
            }
        }
        return (n <= 0);
    }
};