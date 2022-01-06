class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int res=0;
        int tp,curr,n;
        n=arr.size();
        stack<int> s;
        for(int i=0;i<n;i++){
            while(s.empty()==false && arr[s.top()]>=arr[i]){
                tp=s.top(); s.pop();
                curr=arr[tp]*(s.empty() ? i : i-s.top()-1);
                res=max(res,curr);
            }
            s.push(i);
        }
        while(s.empty()==false){
            tp=s.top();
            s.pop();
            curr=arr[tp]*(s.empty() ? n : n-s.top()-1);
            res=max(res,curr);
        }
        return res;
    }
};