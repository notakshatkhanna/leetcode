class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        multiset<int> mp;
        for(int i=0; i<capacity.size(); i++)
            capacity[i]-=rocks[i];
        int ans = 0;
        sort(capacity.begin(), capacity.end());
        for(auto& it: capacity){
            cout<<it<<" ";
        }
        for(auto& it:capacity){
            if(it==0)
                ++ans;
            else if(additionalRocks>0 and it<=additionalRocks){
                ++ans;
                additionalRocks-=it;
            }
        }
        return ans;
    }
};