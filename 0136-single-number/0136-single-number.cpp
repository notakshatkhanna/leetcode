class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xoxo = 0;
        for(int i=0;i<nums.size();i++){
            xoxo ^= nums[i];
        }
        return xoxo;
    }
};