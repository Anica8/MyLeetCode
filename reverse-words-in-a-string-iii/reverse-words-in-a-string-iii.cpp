class Solution {
public:
    void reverse(char str[],int l,int h){
        while(l<=h){
            swap(str[l],str[h]);
            l++;
            h--;
        }
    } 
    string reverseWords(string s) {
        int n=s.length();
        char str[n];
        int start=0;
        for(int i=0;i<s.length();i++)
            str[i]=s[i];
        for(int i=0;i<s.length();i++){
            if(str[i]==' ')
            {
                reverse(str,start,i-1);
                start=i+1;
            }
        }
        reverse(str,start,n-1);
        string ans;
        for(int i=0;i<s.length();i++)
        ans.push_back(str[i]);
        return ans;
    }
};