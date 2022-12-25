class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size(), m = queries.size();
        vector<int> ans(m,0);
        sort(nums.begin(), nums.end());
        for(int i=1;i<n;i++){
            nums[i] = nums[i]+nums[i-1]; 
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(nums[j]>queries[i]){
                    ans[i] = j;
                    break;
                }else if(nums[j]==queries[i]){
                    ans[i] = j+1;
                    break;
                }
                if(j==n-1){
                    ans[i] = j+1;
                }
            }
        }
        return ans;
    }
};