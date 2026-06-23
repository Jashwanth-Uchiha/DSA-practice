class Solution {
    private:
    void solve(vector<vector<int>>& ans,vector<int> output,int n ,int k,int index){
        if(k==0){
            if(n==0){
            ans.push_back(output);}
            return ;}
        if(index>9){
            return ;
        }
       
        
        int mapping[]={0,1,2,3,4,5,6,7,8,9};
        
        // taking the element
        output.push_back(mapping[index]);
         solve(ans,output,n-mapping[index],k-1,index+1);
         output.pop_back();
         // not taking that element
          solve(ans,output,n,k,index+1);


    }

public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> output;
        int index=1;
        solve(ans,output,n,k,index);
        return ans;
    }
};