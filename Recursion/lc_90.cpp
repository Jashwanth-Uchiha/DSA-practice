class Solution {
    private:
 void solve( vector<vector<int>>& ans,vector<int> output,vector<int>& nums,int index){
   ans.push_back(output);
   for(int i=index;i<nums.size();i++){
    if(i!=index && nums[i]==nums[i-1]){ continue ;}
       output.push_back(nums[i]);
       solve(ans,output,nums,i+1);
       output.pop_back();
  }
 }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
      vector<vector<int>> ans;
      vector<int> output;
      int index=0;
      sort(nums.begin(),nums.end());
      solve(ans,output,nums,index);
      return ans;  
    }
};