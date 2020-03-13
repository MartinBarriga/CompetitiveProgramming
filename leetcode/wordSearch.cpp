class Solution {
public:
    
    int check(vector<vector<char>>& board,string &word,vector<vector<int>>& flag,int i,int j,int w){ 
        flag[i][j]=1;
        if(word.size()==w)return 1;

         if((j+1)<board[0].size() && board[i][j+1]==word[w] && flag[i][j+1]==0 && check(board, word, flag, i, j+1, w+1)) return 1;
        if((i+1)<board.size() && board[i+1][j]==word[w] && flag[i+1][j]==0 && check(board,word,flag,i+1,j,w+1)) return 1;
        if((i-1)>=0 && board[i-1][j]==word[w] && flag[i-1][j]==0 && check(board,word,flag,i-1,j,w+1)) return 1;
         if((j-1)>=0 && board[i][j-1]==word[w] && flag[i][j-1]==0 && check(board,word,flag,i,j-1,w+1)) return 1;
        
        flag[i][j]=0;
        return 0;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
       
        vector< vector<int> > flag ( board.size(),vector(board[0].size(),0) );
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
         
                if(board[i][j]==word[0])if(check(board,word,flag,i,j,1)!=0) return true;
                
                cout<<endl;
            }
        }
        return false;
    }
};