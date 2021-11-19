class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        if(s.length()!=t.length())
            return false;
        
        for(int i=0;i<s.length();i++)
            mp[s[i]]++;
        
        for(int i=0;i<t.length();i++){
            if(mp.find(t[i])!=mp.end())
                mp[t[i]]--;
            if(mp.find(t[i])==mp.end())
                return false;
        }
        for(auto i=mp.begin();i!=mp.end();i++){
            if(i->second!=0)
                return false;
        }
        return true;
    }
};