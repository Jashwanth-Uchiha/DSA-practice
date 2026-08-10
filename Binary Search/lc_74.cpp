class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start=0;int end=matrix.size()-1;int mid;
        while(start<end){
           mid =start+(end-start+1)/2;
            if(matrix[mid][0]>target){
                end=mid-1;

            }
            else if(matrix[mid][0]<=target){
                start=mid;
            }
            
            
        }
        int s=0;int e=matrix[0].size()-1;
         while(s<=e){
             int m=s+(e-s)/2;
             if(matrix[start][m]>target){
                e=m-1;
             }
             else if(matrix[start][m]<target){
                s=m+1;
             }
             else{
              return true;
             }
         }
         return false;
    }
};