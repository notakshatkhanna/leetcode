class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        int temp = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                ans = max(temp,ans);\
                temp=0;
            }else{
                temp+=1;
            }
        }
        return max(ans,temp);
    }
};