class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long int> st;
        for(auto& it: tokens){
            if(it != "+" and it != "-" and it != "*" and it != "/" )
            {
    //            cout<<it<<" ";
                st.push(stoi(it));
            }
        else{
 //           cout<<"f "<<it<<" ";
            long long int a = st.top();
            st.pop();
            long long int b = st.top();
            st.pop();
            if(it=="+"){
                st.push(a+b);
            }else if(it=="-"){
                st.push(b-a);
            }else if(it=="*"){
                st.push(a*b);
            }else{
                st.push(b/a);
            }
        }
    }
        int ans = st.top();
        return ans;
    }
};