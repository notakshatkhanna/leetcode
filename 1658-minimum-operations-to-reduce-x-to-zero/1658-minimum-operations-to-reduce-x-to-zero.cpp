class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int t_sum = accumulate(nums.begin(), nums.end(), 0);
        if(t_sum==x)    return n;
        int reqSum = t_sum-x;
        int i=0, j=0, pre=nums[0], maxi=-1;
        while(j<n){
            while(pre>reqSum and i<j){
                pre-=nums[i++];
            }
            if(pre==reqSum){
                maxi=max(maxi,j-i+1);
            }
            j++;
            if(j<n){
                pre+=nums[j];
            }
        }
        if(maxi!=-1){
            return n-maxi;
        }
        return -1;
    }
};