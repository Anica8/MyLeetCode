class Solution {
public:
    int compress(vector<char>& chars) {
        string ans="";
        int ansind=0;
        int i=0;
        int n=chars.size();
        while(i<n){
            int j=i+1;
            while(j<n && chars[i]==chars[j]){
                j++;
            }
            chars[ansind++]=chars[i];
            int count=j-i;
            if(count>1){
                string cha=to_string(count);
                for(auto ch:cha)
                    chars[ansind++]=ch;
            }
            i=j;
        }
        return ansind;
    }
};