class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size(), x = arr[n-1], curr=x;
        for(int i=n-2;i>=0;i--){
            if(arr[i]>curr) curr=arr[i];    
            arr[i] = x;
            x=curr;
        }
        arr[n-1]=-1;
        return arr;
    }
};