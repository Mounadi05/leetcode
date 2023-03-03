class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        int left = 0;
        int right = 0;
        int flag = 0;
        for(int i = 0; i < words.size() && !flag; i++)
                if (words[i] == target)
                        flag = 1;
        if (!flag) return -1;
        int i =  startIndex;
        do{
            if (i == words.size()) i = 0;
            if (words[i] == target) break;
            left++;
        }while(startIndex != ++i);
        i = startIndex;
        do{
            if (i == -1) i = words.size()-1;
            if (words[i] == target) break;
            right++;
        }while(startIndex != --i);
        return (right < left) ? right : left;
     }
};