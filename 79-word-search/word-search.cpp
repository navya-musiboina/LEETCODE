class Solution {
public:
    bool func(vector<vector<char>>&board,string word,int i,int j,int index,vector<vector<int>>&visited)
    {
    if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || visited[i][j]==1 || board[i][j]!=word[index])
          return false;
          
            visited[i][j]=1;
        if(index==word.size()-1) return true;
 
       bool found=func(board,word,i+1,j,index+1,visited)||
       func(board,word,i,j+1,index+1,visited)||
       func(board,word,i-1,j,index+1,visited)||
       func(board,word,i,j-1,index+1,visited);            
         visited[i][j]=0;
         return found;
    }
    bool exist(vector<vector<char>>& board, string word) 
    {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
              if(func(board,word,i,j,0,visited))
               return true;
            }
        }
        
        return false;
    }
};