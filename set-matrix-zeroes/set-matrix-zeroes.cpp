class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        int top=0,right=m-1;
        unordered_map<int,int> mp1,mp2;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    mp1[i]=1;
                    mp2[j]=1;
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
        if(mp1[i]==1 ||mp2[j]==1 ){
        matrix[i][j]=0;
        }
        }
        }
    }
};