class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string sol="";
        sort(strs.begin(),strs.end());
        string x = strs[0];
        int ans = INT_MAX;
        for(int i=1;i<strs.size();i++){
            {
                int j =0;
                int idx =0;
                for(j =0;j<strs[i].size() and j < strs[0].size();j++)
                {
                    if(strs[0][idx]!=strs[i][j]) break;
                    idx++;
                }
                ans = min({ans,j});
            }
        }
        return strs[0].substr(0,ans);
    }
};