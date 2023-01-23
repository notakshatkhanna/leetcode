class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1)    return n;
        unordered_map<int, vector<int>> mp;
        set<int> trusting;
        for(auto& it:trust){
            mp[it[1]].push_back(it[0]);
            trusting.insert(it[0]);
        }
        vector<int> sol;
        for(auto& it: mp){
            if(it.second.size()==n-1 and trusting.find(it.first)==trusting.end()){
                sol.push_back(it.first);}
        }
        if(sol.size()==1)   return sol[0];
        return -1;
    }
};