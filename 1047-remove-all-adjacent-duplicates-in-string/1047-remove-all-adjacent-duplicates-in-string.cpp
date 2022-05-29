class Solution {
public:
    string removeDuplicates(string s) {
        
        string ans="";
        stack<char> st;
        int i=0;
        int n=s.length();
        
        for(auto ch :s){
            if(st.empty()){
                st.push(ch);
                continue;
            }
            if(st.top()==ch){
                st.pop();
            }else{
                st.push(ch);
            }
        }
        
        while(!st.empty()){
            
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};