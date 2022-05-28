class Solution {
public:
    char toLowerCase(char ch){
        char temp;
        if(ch>='A' && ch<='Z')
            temp=ch-'A'+'a';
        else
            return ch;
        return temp;
    }
    bool isVowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            return true;
        else
            return false;
    }
    string reverseVowels(string s) {
        if(s.length()==1) return s;
        int st=0,e=s.length()-1;
        
        // for(int i=0;i<s.length();i++){
        //     s[i]=toLowerCase(s[i]);
        // }
        while(st<=e){
            if(isVowel(s[st]) && isVowel(s[e]))
            {swap(s[st],s[e]); 
             st++;
             e--;}
            else if(isVowel(s[st])==0)
                st++;
            else if(isVowel(s[e])==0)
                e--;
            else 
            {st++;
                e--;}
        }
        return s;
    }
};