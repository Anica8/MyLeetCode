class Solution {
public:
    void solve(int n,vector<string> &ans,int o,int c,string as){
        if(as.size()==2*n){
            ans.push_back(as);
            return ;
        }
        
        if(o<n) solve(n,ans,o+1,c,as+"(");
        if(c<o) solve(n,ans,o,c+1,as+")");
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        
        solve(n,ans,0,0,"");
        return ans;
        
    }
};