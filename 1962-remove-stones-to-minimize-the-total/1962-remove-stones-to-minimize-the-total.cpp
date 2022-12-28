class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        for(auto& it: piles)
            pq.push(it);
        while(k--){
            int e = pq.top();
            pq.pop();
            e-=e/2;
            pq.push(e);
        }
        int ans =0;
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};