class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> pq;
        vector<int> ans;
        for(int i=0;i<k;i++)
            pq.push({abs(arr[i]-x),i});
        
        for(int i=k;i<arr.size();i++){
            int diff=abs(arr[i]-x);
            if(diff<pq.top().first){
                pq.pop();
                pq.push({diff,i});
            }
        }
        while(!pq.empty()){
            ans.push_back(arr[pq.top().second]);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};