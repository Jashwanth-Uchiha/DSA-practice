class Solution {
    private:
    void insert(stack<int> &st,int m){
        if(st.empty()){
            st.push(m);
            return ;
        }
        int n=st.top();
        st.pop();
        insert(st,m);
        st.push(n);
    }
    void reverse(stack<int> &st){
        if(st.empty()){
            return ;
        }
        int m =st.top();
        st.pop();
        
        reverse(st);
        insert(st,m);
        
    }
  public:
    void reverseStack(stack<int> &st) {
      
        reverse(st);
    }
};