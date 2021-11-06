class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0,m=mat[0].size(),n=mat.size();
        if(m==1 && n==1)
            return mat[0][0];
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(i==j)
                    sum+=mat[i][j];
                else if(i+j==n-1)
                    sum+=mat[i][j];
            }
        }
        return sum;
    }
};