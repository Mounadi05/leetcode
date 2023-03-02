class Solution {
public:
    string reformatDate(string date) {
        map <string,string> month = {{"Jan","01"}, {"Feb","02"}, {"Mar","03"}, {"Apr","04"}, {"May","05"}, {"Jun","06"},
                                     {"Jul","07"}, {"Aug","08"}, {"Sep","09"}, {"Oct","10"}, {"Nov","11"}, {"Dec","12"}};
        string format;
        int len = date.find_last_of(" ");
        format = date.substr(len+1,4);
        date[len] = ';';
        len = date.find_last_of(" ");
        format += "-" + month[date.substr(len+1,3)];
        date[len] = ';';
        string day = date.substr(0,len);
        format += (day.size() > 3) ? ("-" + day.substr(0,2)) :("-0" + day.substr(0,1));
        return format;   
    }
    
}; 