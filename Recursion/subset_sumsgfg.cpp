class Solution {
    private:
    void solve(int index,int sum,vector<int>& ans,vector<int>& arr){
        if(index>=arr.size()){
            ans.push_back(sum);
            return;
        }
        // take element
        sum=sum+arr[index];
        solve(index+1, sum, ans, arr);
        sum=sum-arr[index];
        //do not take
        solve(index+1,sum,ans,arr);
    }
  public:
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        
        vector<int>ans;
        int index=0;
        int sum=0;
         solve(index,sum,ans,arr);
         sort(ans.begin(),ans.end());
         return ans;
    }
};