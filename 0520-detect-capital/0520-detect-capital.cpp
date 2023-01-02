class Solution {
public:
    bool detectCapitalUse(string word) {
        int cap=0;
        for(int i=0;i<word.length();i++){
            if(isupper(word[i]))
                ++cap;
        }
        if(cap==1)
            if(isupper(word[0]))
                return true;
            else
                return false;
        else if(cap==word.length() or cap == 0)
            return true;
        else    return false;
    }
};