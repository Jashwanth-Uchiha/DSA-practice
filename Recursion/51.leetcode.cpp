class Solution {
    private:
    
bool safe(vector<string>& output,int row,int col,int n){
        // check row left
        for(int c=0;c<col;c++){
            if(output[row][c]=='Q') return false;
        }
        // check upper left diagonal
        int ro=row,c=col;
        while(ro>=0&&c>=0){
            if(output[ro][c]=='Q') return false;
            ro--;c--;
        }
        // check lower left diagonal
        ro=row;c=col;
        while(ro<n&&c>=0){
            if(output[ro][c]=='Q') return false;
            ro++;c--;
        }
        return true;
    }
    void solve(vector<vector<string>>& ans,vector<string> output,int column,int n){
     if(column>=n){
        ans.push_back(output);
        return ;
     }
     for(int row=0;row<n;row++){
        if(safe(output,row,column,n)){
          output[row][column]='Q';
          solve(ans,output,column+1,n);
          output[row][column]='.';  
        }
     }
    }

public:
    vector<vector<string>> solveNQueens(int n) {
         vector<vector<string>> ans;
         vector<string> output(n,string(n,'.'));
         int column=0;

         solve(ans,output,column,n);
        return ans;
    }
};