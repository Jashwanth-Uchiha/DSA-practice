class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
     vector<int> ans(arr.size());
     stack<int> s;
     s.push(-1);
     for(int i=arr.size()-1;i>=0;i--){
         int curr=arr[i];
         while(s.top()>=curr){
             s.pop();
         }
         ans[i]=s.top();
         s.push(curr);
     }
     return ans;
        
    }
};