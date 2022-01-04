class Solution {
public:
    bool matching(char a,char b){
        return (a=='{' && b=='}' || a=='(' && b==')' || a=='[' && b==']');
    }
    bool isValid(string x) {
        stack<char> s;
        for(char i:x){
            if(i=='{' || i=='(' || i=='[')
                s.push(i);
            else{
                if(s.empty()==true)
                    return false;
                else if(matching(s.top(),i)==false)
                    return false;
                else 
                    s.pop();
            }
        }
        return (s.empty()==true);
    }
};