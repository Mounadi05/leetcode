class Solution {
public:
//     bool isPalindrome(string s, int start = 0, int end = -1) {
//         if (end == -1) return isPalindrome(s,0,s.size() - 1);
//         if (start >= end) return true;
//         if (toupper(s[start]) == toupper(s[end])) return isPalindrome(s, ++start,--end);
//         else if (!isalpha(s[start]) && !isdigit(s[start])) return isPalindrome(s, ++start,end);
//         else if (!isalpha(s[end]) && !isdigit(s[end])) return isPalindrome(s, start,--end);
//         return false;
        
//     }
     bool isPalindrome(string s) {
         int start = 0, end = s.size()-1;
         while(start <= end)
         {
             if (toupper(s[start]) == toupper(s[end])) start++,end--;
             else if (!isalpha(s[start]) && !isdigit(s[start])) start++;
             else if (!isalpha(s[end]) && !isdigit(s[end])) end--;
             else return false;     
         }
         return true;    
    }
};