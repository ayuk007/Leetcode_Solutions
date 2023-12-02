class Solution {
public:
    string removeStars(string s) {
        stack<char> stc;
        for(auto it: s){
            if((it == '*' && !stc.empty()) || (it == '*')){
                stc.pop();
            }
            else{
                stc.push(it);
            }
        }
        
        if(stc.empty()) return "";
        
        string ans;
        
        while(stc.size() > 0){
            ans.push_back(stc.top());
            stc.pop();
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};