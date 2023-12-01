class Solution {
public:
    int compress(vector<char>& chars) {
        int size = chars.size();
        string s = "";
        int count = 1;
        chars.push_back('*');
        
        for(int i = 0; i<size; i++){
            if(chars[i+1] == chars[i]){
                count++;
            }
            else{
                s+=chars[i];
                if(count > 1){
                    s+=to_string(count);
                    count = 1;
                }
            }
        }
        
        for(int i = 0; i<s.length(); i++){
            chars[i] = s[i];
        }
        
        return s.size();
    }
};