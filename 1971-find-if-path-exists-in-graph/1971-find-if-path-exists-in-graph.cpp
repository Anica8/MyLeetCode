class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        bool visited[n];
        for(int i=0;i<n;i++) visited[i]=false;
        vector<int> adj[n];
        for(int i=0; i<edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        queue<int> q;
        q.push(source);
        visited[source]=true;
        
        while(!q.empty()){
            int t=q.front();
            q.pop();
            
            if(t == destination)
                return true;
            for(int v:adj[t]){
                if(visited[v]==false)
                {visited[v]=true;
                 q.push(v);}
            }
        }
        // for(int i=0;i<n;i++){
        //     if(visited[i]==false){
        //         return false;
        //     }
        // }
        return false;
    }
};