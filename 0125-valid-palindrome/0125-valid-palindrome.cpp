class Solution {
public:
    string convert(string s){
        string cs="";
        for(auto& it: s)
            if(isalnum(it)) cs+=tolower(it);
        return cs;
    }
    
    bool isPalindrome(string s) {
        s = convert(s);
        int start = 0, end = s.size()-1;
        while(start<end){
            if(s[start++]!=s[end--])    
                return false;
        }
        return true;
    }
};