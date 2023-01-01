class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> mp;
        set<string> st;
        int j=0, n=s.length(), sc=1, m = pattern.length();
        for(int i=0;i<m;i++){
            string temp = "";
            while(j<n){
                temp+=s[j];
                ++j;
                if(s[j]==' '){
                    ++j;
                    if(++sc>m)
                        return false;
                    break;
                }
            }
            if(mp.find(pattern[i])==mp.end()){
                if(st.count(temp)==1)
                    return false;
                mp[pattern[i]] = temp;
                st.insert(temp);
            }
            else{
                if(mp[pattern[i]]!=temp)
                    return false;
                else    continue;
            }
        }
        if(sc<m)
            return false;
        return true;
    }
};