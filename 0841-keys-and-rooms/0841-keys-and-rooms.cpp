class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int> visited(n, false);
        visited[0] = true;
        queue<int> q;
        q.push(0);
        
        while(!q.empty()){
            int room = q.front();
            q.pop();
            for(auto key: rooms[room]){
                if(!visited[key]){
                    visited[key] = true;
                    q.push(key);
                }
            }
        }
        for(auto x: visited){
            if(!x) return false;
        }
        return true;
    }
};