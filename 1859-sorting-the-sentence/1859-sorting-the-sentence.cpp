class Solution {
public:
    string sortSentence(string s) {
        map<int,string> mp;
        string word="";
        
        for(char c :s){
            if(c>='0' && c<='9'){
                int a=c-'0';
                mp[a]=word;
                word="";
            }else if(c==' '){
                continue;
            }else
                word+=c;
        }
        
        string ans="";
        
        for(auto x:mp){
            ans+=x.second+' ';
        }
        ans.pop_back();
        return ans;
    }
};