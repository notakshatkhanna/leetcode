class Solution {
public:
    bool f(int idx, string s, unordered_set<string>& st, vector<int>& dp){
        if(idx==s.length()) return true;
        if(dp[idx]!=-1) return dp[idx];
        string str="";
        for(int i=idx;i<s.length();i++){
            str+=s[i];
            if(st.find(str)!=st.end() and f(i+1,s,st,dp))  return dp[idx] = true;
        }
        return dp[idx] = false;
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> st;
        for(auto& it: wordDict) st.insert(it);
        vector<int> dp(s.length(),-1);
        return f(0,s,st,dp);
    }
};