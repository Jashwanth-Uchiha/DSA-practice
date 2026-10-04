class Solution {
    private:
    void insert(stack<int> &st,int x){
        if(st.empty()){
            st.push(x);
            return;
        }
        int n=st.top();
        st.pop();
        insert(st,x);
        st.push(n);
        
    }
  public:
    stack<int> insertAtBottom(stack<int> &st, int x) {
        insert(st,x);
        return st;
    }
};