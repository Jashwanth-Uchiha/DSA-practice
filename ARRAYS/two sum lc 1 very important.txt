class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <pair<int,int>> sort_nums;
        for(int i=0;i<nums.size();i++){
            sort_nums.push_back({nums[i],i});
        }
        sort(sort_nums.begin(),sort_nums.end());
        int i=0,j=nums.size()-1;
        while(i<j){
       int     sum=sort_nums[i].first+sort_nums[j].first;
            if(sum==target){
                return {sort_nums[i].second,sort_nums[j].second};
            }
            else if(sum<target){
                i++;
            }
            else{
                j--;
            }
        }
      
      return {-1,-1};
    }
};