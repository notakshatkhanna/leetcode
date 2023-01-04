class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> mp;
        int ans=0;
        for(auto& it:tasks) mp[it]++;
        for(auto& it:mp){
            if(it.second<2)
                return -1;
            else if(it.second==2 or it.second==3)
                ++ans;
            else{
                if(it.second%3==0)  ans+=it.second/3;
                else if(it.second%3==2) ans+=(it.second/3)+1;
                else if(it.second%3==1) ans+=((it.second-4)/3)+2;
            }
        }
        return ans;
    }
};