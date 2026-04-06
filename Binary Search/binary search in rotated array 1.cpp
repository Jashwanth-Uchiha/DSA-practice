class Solution {
     int pivot(vector<int>& nums, int target){ int start=0,end=nums.size()-1,mid;
    while(start<end){
     
      if(nums[0]>nums[end]){ 
         mid=start+(end-start)/2;
         if(nums[0]>nums[mid]){
            end=mid;
        }
        else if(nums[0]<=nums[mid]){
            start=mid+1;
        }}
       if(nums[0]<nums[end]){
         return 0;

       }
       // add this before the two ifs
if(nums[0] == nums[end]) return 0;
        
    }
     return start ; }
public:
    int search(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1,mid;int ans=-1;
       if(target>=nums[0]){
       if(pivot(nums, target)==0){
         end=nums.size()-1;
       }     
      else{ 
        end=pivot(nums, target)-1;
      }
        }
        
        if(target<nums[0]){
             start= pivot(nums, target);
        }
        while(start<=end){
            mid= start+(end-start)/2;
            if(nums[mid]>target){
                end=mid-1;
            }
            else if(nums[mid]<target){
                start=mid+1 ;
            }
            else if(nums[mid]==target){
                return mid;
            }
        }
        return ans;
        
        
        
        
    }
};