class Solution {
public:
    int calcul(int n)
    {
        int sum = 0;
        while(n > 0)
        {
            sum += (n%10) * (n%10);
            n /= 10; 
        }
        return sum;
    }
    bool isHappy(int n) {
        set <int> seen; 
        while(n != 1)
        {
            n = calcul(n);
            if (seen.count(n)) return false;
            seen.insert(n);
        }
        return  true;
    }
};