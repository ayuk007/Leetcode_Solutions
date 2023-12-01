class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        string helper = "";
        
        for(int i = s.length()-1; i>=0; i--){
            
            if(s[i]==' '){
                
                if(helper.size() > 0){
                    reverse(helper.begin(), helper.end());
                    ans+=helper;
                    ans+=" ";
                    helper = "";
                }
            }
            
            else{
                helper+=s[i];
            }
        }
        
        if(helper.length() > 0){
            reverse(helper.begin(), helper.end());
            ans+=helper;
        }
        
        else if(ans.size() > 0) ans.pop_back();
        
        return ans;
    }
};