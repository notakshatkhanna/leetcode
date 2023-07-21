class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        stack<int> st;
        for(int i=0;i<n;i++){
            if(st.empty() or asteroids[i]>0){
                st.push(asteroids[i]);
            }else{
                while(true){
                    if(st.top()<0){
                        st.push(asteroids[i]);
                        break;
                    }else if(st.top()==abs(asteroids[i])){
                        st.pop();
                        break;
                    }else if(st.top()>abs(asteroids[i])){
                        break;
                    }else if(st.top()<abs(asteroids[i])){
                        st.pop();
                        if(st.empty()){
                            st.push(asteroids[i]);
                            break;
                        }
                    }
                }
            }
        }
        vector<int> ans(st.size());
        for(int i=st.size()-1;i>=0;i--){
            ans[i] = st.top();
            st.pop();
        }
        return ans;
    }
};