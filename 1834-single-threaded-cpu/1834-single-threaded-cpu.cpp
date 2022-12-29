class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        vector<int> v;
        map<int, vector<pair<int, int>>> mp;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
        for(int i=0;i<tasks.size();i++)
            mp[tasks[i][0]].push_back({tasks[i][1],i});
        for(auto& i: mp){
            sort(i.second.begin(), i.second.end());
        }
        auto it = mp.begin();
        int time = it->first;
        while(!mp[time].empty()){
                   q.push(mp[time].back());
                   mp[time].pop_back();
               }

        v.push_back(q.top().second);
        int processTime=time+q.top().first;   
        q.pop();
        it ++;
        while(it!=mp.end()){
            time=it->first;
            if(processTime<time){ 
                if(!q.empty()){
					while(processTime<time && !q.empty()){
					v.push_back(q.top().second);
					processTime+=q.top().first;
					q.pop(); 
					}
					while(!mp[time].empty()){
					q.push(mp[time].back());
					mp[time].pop_back();
				   }
                }else{
                   while(!mp[time].empty()){
                       q.push(mp[time].back());
                       mp[time].pop_back();
				   }
                    v.push_back(q.top().second);
					processTime=time+q.top().first;
					q.pop();
                }
            }else{
                 while(!mp[time].empty()){
                       q.push(mp[time].back());
                       mp[time].pop_back();
                } 
			}
			it++;
        }
        while(!q.empty()){
            v.push_back(q.top().second);
            q.pop();
        }
        return v;
    }
};

