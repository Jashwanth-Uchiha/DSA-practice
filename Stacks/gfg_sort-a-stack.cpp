class Solution {
    private:
   void sorted(stack<int> &st,int n){
       
       if(st.empty()||st.top()<n){
           st.push(n);
           return ;
       }
       
       int m=st.top();
       st.pop();
       sorted(st,n);
       st.push(m);
       
       
   }
    
    
    
  public:
    void sortStack(stack<int> &st) {
        if(st.empty()){
            return ;
        }
        int n=st.top();
        st.pop();
        sortStack(st);
        sorted(st,n);
    }
};
