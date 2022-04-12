class Solution {
public:
    
    bool issafe(int x,int y,int r,int c)
    {
        return (x>=0 && x<r && y>=0 && y<c);
    }
    void gameOfLife(vector<vector<int>>& board) {
        int r=board.size();
        int c=board[0].size();
        
        vector<vector<int>>copy;
        copy=board;
        vector<int>dx={1,1,0,-1,-1,-1,0,1};
        vector<int>dy={0,1,1,1,0,-1,-1,-1};
        
         for(int i=0;i<r;i++)
         {
              for(int j=0;j<c;j++)
              {
                  int livecount=0;
                   for(int k=0;k<8;k++)
                   {
                       if(issafe(i+dx[k],j+dy[k],r,c) && copy[i+dx[k]][j+dy[k]]==1)
                           livecount++;
                   }
                       if(copy[i][j]==0 && livecount==3)
                           board[i][j]=1;
                        if(board[i][j]==1 &&(livecount<2 || livecount>3))
                           board[i][j]=0;
                      
              }
         }
  
    }
};