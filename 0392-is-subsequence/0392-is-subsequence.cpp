class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_size = s.length(), i=0;
        for(int j=0;j<t.length();j++){
            if(s[i]==t[j])  ++i;
        }
        if(i==s_size)  return true;
        return false;
    }
};