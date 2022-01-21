class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();
        int top=0,right=m-1;
        
        if(matrix[0][0]==target)
            return 1;
        while(top<=n-1 && right>=0){
            if(matrix[top][right]==target)
                return 1;
            else if(matrix[top][right]>target)
                right--;
            else if(matrix[top][right]<target)
                top++;
        }
        return 0;
    }
};