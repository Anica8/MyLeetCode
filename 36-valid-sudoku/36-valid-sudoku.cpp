class Solution {
public:
    bool isValid(vector<vector<char>>& board,int r,int col,char c){
        
        for(int i=0;i<9;i++){
            if(board[r][i]==c)
                return false;
            
            if(board[i][col]==c)
                return false;
            
            if(board[3*(r/3)+i/3][3*(col/3)+i%3]==c)
                return false;
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        int f=true;
        
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]!='.'){
                    char ch=board[i][j];
                    board[i][j]='.';
                    if(!isValid(board,i,j,ch))
                        return false;
                    board[i][j]=ch;
                }
            }
        }
        return true;
    }
};