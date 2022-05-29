class Solution {
public:
    string interpret(string command) {
        string ans="";
        for(int i=0;i<command.length();i++){
            if(command[i]=='G')
                ans.push_back('G');
            else if(i+1<command.length() && command[i]=='(' && command[i+1]==')'){
                ans.push_back('o');
            }else if(i+1<command.length() && command[i]=='(' && command[i+1]=='a'){
                
                ans.push_back('a');
                ans.push_back('l');
               
            }
        }
        return ans;
    }
};