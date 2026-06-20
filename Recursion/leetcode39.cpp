class Solution {
    private:
    void solve(int index,vector<int> output,vector<vector<int>>& ans,vector<int>& candidates,int& sum){
        if(sum==0){
            ans.push_back(output);
            return ;
        }
        if(sum<0){
            return ;
        }
        if(index >= candidates.size()) return;
        //take index
     
            output.push_back(candidates[index]);
            sum=sum-candidates[index];
            solve(index,output,ans,candidates,sum);
            sum=sum+candidates[index];
            output.pop_back();
        
        // do not take
        solve(index+1,output,ans,candidates,sum);
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;vector<int> output;int index=0;
        solve(index,output,ans,candidates,target);
        return ans;
    }
};