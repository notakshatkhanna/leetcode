class Solution {
public:
    set<vector<int>> sol;
    void solve(int i, vector<int> &nums, vector<int> temp){
        if(i==nums.size()){
            if(temp.size()>1)   sol.insert(temp);
            return;
        }
        if(temp.size()>=1 and temp.back()<=nums[i]){
            temp.push_back(nums[i]);
            solve(i+1,nums,temp);
            temp.pop_back();
        }
        if(temp.size()==0)
        temp.push_back(nums[i]);
        solve(i+1,nums,temp);
    }
    
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int> temp;
        for(int i=0;i<nums.size();i++)
            solve(i, nums, temp);
        vector<vector<int>> f;
        for(auto& it: sol)
            f.push_back(it);
        return f;
    }
};