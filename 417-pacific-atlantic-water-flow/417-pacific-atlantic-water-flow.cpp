class Solution {
public:
    int dir[5] = {1,0,-1,0,1};
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& arr) {
        
        int n = arr.size(), m =arr[0].size();
        
        vector<vector<int>> ans;
        set<pair<int,int>> dp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                queue<pair<int,int>> q;
                set<pair<int,int>> visited;
                q.push({i,j});
                int pacific = 0,atlantic =0;
                while(q.size())
                {
                    pair<int,int> front = q.front();
                    int y = front.first,x = front.second;
                    if(dp.find({y,x}) != dp.end())
                    {
                        pacific = 1;
                        atlantic = 1;
                        break;
                    }
                    visited.insert({y,x});
                    q.pop();
                    
                    for(int k=0;k<4;k++)
                    {
                        if(y+dir[k] < 0 || x+dir[k+1] < 0) pacific = 1;
                        if(y+dir[k] >= n || x+dir[k+1] >= m) atlantic = 1;
                        
                        if(y+dir[k] >=0 && y+dir[k] < n && x+dir[k+1] >=0 && x+dir[k+1] < m && visited.find({y+dir[k],x+dir[k+1]}) == visited.end() && arr[y][x] >= arr[y+dir[k]][x+dir[k+1]])
                        {
                            q.push({y+dir[k],x+dir[k+1]});
                        }
                        
                    }
                    
                }
                
                if(pacific+atlantic == 2) 
                {
                    ans.push_back({i,j});   
                    dp.insert({i,j});
                }
            }
        }
        return ans;
            
    }
};