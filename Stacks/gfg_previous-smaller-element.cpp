class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        //  code here
        vector <int> ans(arr.size());
        stack<int> s;
        s.push(-1);
        for(int i=0;i<arr.size();i++){
            int curr= arr[i];
            while(s.top()>=curr){
                s.pop();
            }
            ans[i]=s.top();
            s.push(curr);
            
        }
        return ans;
    }
};