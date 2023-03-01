class Solution {
public:
    int distinctIntegers(int n) {
        set<int> dis;
        for(int i = n ; i > 0  ; i-- )
        {
            for(int x = 1 ; x < i ;x++)
                if (i % x == 1)
                {
                    dis.insert(i);
                    dis.insert(x);
                }
        }
        return (dis.empty()) ? 1 : dis.size();
    }
};