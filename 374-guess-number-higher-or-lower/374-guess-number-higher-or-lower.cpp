/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

 class Solution {
public:
    int guessNumber(int n) {
    long int low = 0;
    long int high = n;
    long int a = (low + high)/2;
    while(low <= high)
    {
        a = (low + high)/2;
        if (guess(a) == 0)
            return (a);
        else if (guess(a) == -1)
            high = a - 1;
        else
            low = a + 1;
    }
    return (-1); 
    }
};
