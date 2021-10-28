class Solution {
public:
    int romanToInt(string s) {
        map<char,int> m={
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
            };
        int n=s.size();
        int ans=0;
        for(int i=n-1;i>=0;i--){
            if(s[i+1]=='V' && s[i]=='I')
                ans=ans-1;
            
            else if(s[i+1]=='X' && s[i]=='I')
                ans=ans-1;
                
            else if(s[i+1]=='L' && s[i]=='X')
                ans=ans-10;
            
            else if(s[i+1]=='C' && s[i]=='X')
                ans=ans-10;
        
            else if(s[i+1]=='D' && s[i]=='C')
                ans=ans-100;
    
            else if(s[i+1]=='M' && s[i]=='C')
                ans=ans-100;
                
            else
                ans=ans+m[s[i]];
        }
        return ans;
    }
};