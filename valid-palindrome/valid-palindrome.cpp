class Solution {
public:
    bool isPalin(string str){
        int n=str.length();
        for(int i=0;i<n/2;i++){
            if(str[i]!=str[n-i-1])
                return false;
        }
        return true;
    }
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.length();i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                str += tolower(s[i]);
            }
            if(s[i] >= 'a' && s[i] <= 'z'){
                str += s[i];
            }
            if(s[i] >= '0' && s[i] <= '9'){
                str += s[i];
            }
        }
        cout<<str;
        return isPalin(str);
    }
};