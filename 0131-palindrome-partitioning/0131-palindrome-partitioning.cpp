class Solution {
public:
    bool check(string &s, int l, int r){
        while(l<r){
            if(s[l++]!=s[r--]) return false;
        }
        return true;
    }

    void solve(int idx, string &s, vector<vector<string>>& sol, vector<string> temp){
        if(idx==s.length()){
            sol.push_back(temp);
            return;
        }else{
            for(int i=idx;i<s.length();i++){
                if(check(s,idx,i) ){
                    auto str = s.substr(idx, (i-idx+1));
                    temp.push_back(str);
                    solve(i+1,s,sol,temp);
                    temp.pop_back();
                }
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<string> temp;
        vector<vector<string>> sol;
        solve(0, s, sol, temp);
        return sol;
    }
};