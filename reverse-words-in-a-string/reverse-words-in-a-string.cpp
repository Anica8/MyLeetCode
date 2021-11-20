class Solution {
public:
    
    string reverseWords(string s) {
        stack<string> rev;
        string word;
        for(int i = 0; i < s.length(); ++i){
            if(s[i] != ' '){
                word.push_back(s[i]);
            }else if(!word.empty()){
                rev.push(word);
                word.clear();
            }
        }
        
        if(!word.empty()){
            rev.push(word);
            word.clear();
        }
        
        while(!rev.empty()){
            word.append(rev.top());
            word.append(" ");
            rev.pop();
        }
        
        word.pop_back();
        
        return word;
    }
    
};