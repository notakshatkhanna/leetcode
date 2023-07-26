class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                ++count;
            }
        }
        if(count==0)    return;
        int idx=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[idx++] = nums[i];
            }
        }
        for(int i=idx;i<n;i++){
            nums[i] = 0;
        }
    }
};