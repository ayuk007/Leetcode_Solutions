class Solution {
public:

    bool isPalindrome(int start, int end, string &s){
        while(start <= end){
            if(s[start++] != s[end--]) return false;
        }
        return true;
    }

    void solve(int idx, string &s, vector<vector<string>> &res, vector<string> &ds){
        if(idx == s.size()){
            res.push_back(ds);
            return;
        }
        for(int i = idx; i<s.size(); i++){
            if(isPalindrome(idx, i, s)){
                ds.push_back(s.substr(idx, i - idx + 1));
                solve(i + 1, s, res, ds);
                ds.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<string> ds;
        vector<vector<string>> res;
        solve(0, s, res, ds);
        return res;
    }
};