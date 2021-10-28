class RecentCounter {
public:
    int counter;
    vector<int> req;
    RecentCounter() {
        counter=0;
    }
    
    int ping(int t) {
        int count=0;
        req.push_back(t);
        int n=req.size();
        for(int i=0;i<n;i++){
            if(req[i]>=(t-3000) && req[i]<=t)
                count++;
        }
        return count;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */