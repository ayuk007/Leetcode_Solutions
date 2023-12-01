class Solution {
public:
    bool isSubsequence(string s, string t) {
        int left = s.size(), right = t.size();
        int pleft = 0, pright = 0;

        while(pleft < left && pright < right){
            if(s.at(pleft) == t.at(pright)) pleft++;
            pright++;
        }
        return pleft == left;
    }
};