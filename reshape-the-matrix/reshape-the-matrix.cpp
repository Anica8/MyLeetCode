class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> arr(r,vector<int>(c));
        vector<int> ans;
        int n=mat.size(),m=mat[0].size();
        if(m*n != r*c) return mat;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                ans.push_back(mat[i][j]);
            }
        }
        int it=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                arr[i][j]=ans[it];
                    it++;
            }
        }
        return arr;
    }
};