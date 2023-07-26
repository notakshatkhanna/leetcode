class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n*(n+1))/2;
        int tsum = accumulate(nums.begin(),nums.end(),0);
        if(tsum==sum)   return 0;
        return sum-tsum;
    }
};