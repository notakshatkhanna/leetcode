class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();
        int rot;

        for(int i=0;i<n-1;i++){
            if(nums[i]<=nums[i+1])   
                continue;
            else{
                ++cnt;
                rot = i+1;
            }
            if(cnt>1)   return false;
        }
        if(cnt==0)  return true;
        
        vector<int> v(n);
        for(int i=0;i<n;i++){
            v[i] = nums[(i+rot)%n];
            if(i>0 and v[i]<v[i-1])
                return false;
        }
        return true;
    }
};