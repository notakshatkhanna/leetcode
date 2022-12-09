class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
        if(n==0)    return 0;
        vector<long long> pre(n);
        pre[0] = nums[0];
        for(int i=1;i<n;i++){
            pre[i] = pre[i-1]+nums[i];
        }
        int e = INT_MAX, ans;
        for(int i=0;i<n-1;i++){
            long long x = abs((pre[i]/(i+1)) - ((pre[n-1]-pre[i])/(n-i-1)));
            if(x < e){
                e = x;
                ans = i;
            }
        }
        if(pre[n-1]/n<e){
            ans = n-1;
        }
        return ans;
    }
};