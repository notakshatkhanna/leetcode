class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        vector<int> pre(n,1);
        for(int i=1;i<n;i++)
            pre[i]=nums[i-1]*pre[i-1];
        int e=1;
        for(int i=n-2;i>=0;i--){
            e=nums[i+1]*e;
            pre[i]*=e;
        }
        return pre;
    }
};