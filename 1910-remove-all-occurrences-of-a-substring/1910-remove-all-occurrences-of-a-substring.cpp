class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n=part.length();
        while(s.length()!=0 && s.find(part)<s.length()){
            int ind=s.find(part);
            s.erase(ind,n);
        }
        return s;
    }
};