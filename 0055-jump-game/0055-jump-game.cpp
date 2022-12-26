class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size(), target = n-1;
        for(int i=n-2;i>=0;i--){
            if(i+nums[i]>=target){
                target = i;
            }
            if(i==0 and nums[i]<target)
                return false;
        }
        return true;
    }
};