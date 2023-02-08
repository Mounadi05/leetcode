class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int a = 0;
        int i = 0;
        for(; i < name.size() && a < typed.size() ; i++)
        {   
            if (name[i+1] && name[i] == name[i+1] && name[i] == typed[a] && ++a);
            else if (name[i] == typed[a])
                while(name[i] && typed[a] && name[i] == typed[a] && ++a);
            else
                return false;
        }
        return (!typed[a] && !name[i]);
    }
};