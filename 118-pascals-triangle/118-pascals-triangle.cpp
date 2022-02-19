class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0;i<numRows;i++){
            vector<int> a;
            for(int j=0;j<=i;j++){
                if(j==0 || j==i)
                    a.push_back(1);
                else
                {
                    int m=ans[i-1][j-1]+ans[i-1][j];
                    a.push_back(m);
                }
            }
            ans.push_back(a);
        }
        return ans;
    }
};