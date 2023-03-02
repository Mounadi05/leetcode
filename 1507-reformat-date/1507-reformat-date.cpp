class Solution {
public:
    string ft_month(vector<string> &month, string m)
    {
        for(int i = 0; i < month.size() ; i++)
            if (month[i] == m)
            {
                if (i >= 9)
                    return to_string(i+1);
                else
                    return "0"+to_string(i+1);
            }
        return "";
    }
    string reformatDate(string date) {
        vector<string> month = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        string format;
        int len = date.find_last_of(" ");
        format = date.substr(len+1,4);
        date[len] = ';';
        len = date.find_last_of(" ");
        format += "-" + ft_month(month, date.substr(len+1,3));
        date[len] = ';';
        string day = date.substr(0,len);
        if (day.size() > 3)
            format += "-" + day.substr(0,2);
        else
            format += "-0" + day.substr(0,1);
        return format;   
    }
    
}; 