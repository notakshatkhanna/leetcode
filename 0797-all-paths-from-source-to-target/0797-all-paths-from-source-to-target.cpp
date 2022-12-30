class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    void solve(int node, vector<vector<int>> &graph){
        temp.push_back(node);
        if(node == graph.size()-1)
            ans.push_back(temp);
        else{
            for(auto& it: graph[node]){
                solve(it, graph);
            }
        }
        temp.pop_back();
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        solve(0, graph);
        return ans;
    }
};