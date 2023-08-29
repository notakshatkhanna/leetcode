class Solution {
public:
    unordered_map<int,int> mp;
    bool f(int i, int k, vector<int>& s, vector<vector<int>> &dp){
        if(i == s.size()-1)  return true;
        if(dp[i][k]!=-1)   return dp[i][k];
        bool a=false,b=false,c=false;
        if(mp[s[i]+k-1] and s[i]+k-1>s[i])  a = f(mp[s[i]+k-1], k-1, s, dp);
        if(mp[s[i]+k+1])    c = f(mp[s[i]+k+1], k+1, s, dp);
        if(mp[s[i]+k])      b = f(mp[s[i]+k], k, s, dp);
        return dp[i][k] = a or b or c;
    }
    
    bool canCross(vector<int>& stones) {
        for(int i=0;i<stones.size();i++)    mp[stones[i]]=i;
        vector<vector<int>> dp(stones.size(), vector<int> (stones.size(),-1));
        return f(0,0,stones,dp);
    }
};