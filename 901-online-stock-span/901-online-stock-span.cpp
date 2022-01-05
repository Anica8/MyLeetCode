class StockSpanner {
public:
    vector<int> arr;
    stack<int> s;
    StockSpanner() {
        
    }
    
    int next(int price) {
        arr.push_back(price);
        
        while(s.empty()==false && arr[s.top()]<=price)
            s.pop();
        int span=s.empty() ? arr.size() : arr.size()-1-s.top();
        s.push(arr.size()-1);
        cout<<arr.size();
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */