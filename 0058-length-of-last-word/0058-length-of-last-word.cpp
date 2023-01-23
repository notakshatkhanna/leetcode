class Solution {
public:
    int lengthOfLastWord(string s) {
        int flag=0, sol=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]!=' '){
                flag=1;
                ++sol;
            }
            if(flag==1 and (s[i]==' ' or i<=0)) return sol;
        }
        return sol;
    }
};