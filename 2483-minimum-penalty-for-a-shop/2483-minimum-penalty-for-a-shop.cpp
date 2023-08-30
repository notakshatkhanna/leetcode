class Solution {
public:
    int bestClosingTime(string c) {
        int maxi = 0, sol = -1, curr=0;
        for(int i=0;i<c.length();i++){
            if(c[i]=='Y'){
                ++curr;
            }else{
                --curr;
            }
            if(curr>maxi){
                maxi=curr;
                sol=i;
            }
        }
        return sol+1;
    }
};