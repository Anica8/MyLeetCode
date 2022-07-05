class Solution {
public:
    void solve(int col,int n,vector<string> board,vector<vector<string>> &ans,vector<int> &row,vector<int> &upDia,vector<int> &dow){
        if(n==col){
            ans.push_back(board);
            return ;
        }
        
        for(int r=0;r<n;r++){
            if (row[r] == 0 && dow[r + col] == 0 && upDia[n - 1 + col - r] == 0)            {
          board[r][col] = 'Q';
          row[r] = 1;
          dow[r + col] = 1;
          upDia[n - 1 + col - r] = 1;
          solve(col + 1, n,board, ans, row, upDia, dow);
          board[r][col] = '.';
          row[r] = 0;
          dow[r + col] = 0;
          upDia[n - 1 + col - r] = 0;
        }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        
        for(int i=0;i<n;i++)
            board[i]=s;
        
        vector<int> row(n,0);
        vector<int> upDia(2*n-1,0);
        vector<int> downDia(2*n-1,0);
        solve(0,n,board,ans,row,upDia,downDia);
        return ans;
    }
};