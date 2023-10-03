class Solution {
public :
  void insertkey(set<int> &keys, set<int> &visited,vector<vector<int>>& rooms, vector<int> room)
   {
       for(int i = 0; i < room.size(); i++)
       {
           if(!visited.count(room[i]))
           {
                keys.insert(rooms[room[i]].begin(), rooms[room[i]].end());
                visited.insert(room[i]);
                insertkey(keys,visited,rooms,rooms[room[i]]);
           }
       }
   }
   bool canVisitAllRooms(vector<vector<int>>& rooms) {
        set<int> keys;
        set<int> visited;
        keys.insert(rooms[0].begin(),rooms[0].end());
        insertkey(keys,visited,rooms,rooms[0]);
        for(int i = 0; i < rooms.size();i++)
        {
           
            if (i != 0 && !keys.count(i)) return false;
            keys.insert(rooms[i].begin(),rooms[i].end());
            insertkey(keys,visited,rooms,rooms[i]);                       
        }
        return true;
    }
};