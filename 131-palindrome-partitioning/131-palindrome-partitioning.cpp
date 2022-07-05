class Solution {
public:
    bool isPalin(string s){
        int n=s.length();
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1])
                return false;
        }
        return true;
    }    
    void solve(vector<vector<string>> &ans,vector<string> as,string s,int ind,int n){
        if(n==ind){
            ans.push_back(as);
            return;
        }
        
        for(int i=ind;i<n;i++)
        {
            if(isPalin(s.substr(ind,i-ind+1))){
            as.push_back(s.substr(ind,i-ind+1));
            solve(ans,as,s,i+1,n);
            as.pop_back();
            }
        }   
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> as;
        int n=s.length();
        solve(ans,as,s,0,n);
        return ans;
    }
};