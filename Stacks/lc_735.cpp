class Solution {
    private:
    void give(stack<int>&s,vector<int>&ans){
        if(s.empty()){
            return;
        }
        int n=s.top();
        s.pop();
        give(s,ans);
        ans.push_back(n);
    }
    void coll(stack<int>&s,int num){

    if(s.empty()){
        s.push(num);
        return;
    }

    if(s.top() < 0 || num > 0){
        s.push(num);
        return;
    }

    int n=s.top();
    s.pop();

    if(abs(n)==abs(num)){
        return;
    }
    else if(abs(n)>abs(num)){
        s.push(n);
        return;
    }
    else{
        coll(s,num);
    }
}
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        stack<int> s;
        for(int i=0;i<ast.size();i++){
         if(ast[i]>0){
            s.push(ast[i]);

         }
        else{
            coll(s,ast[i]);
        }

        }
        vector<int>ans;
        give(s,ans);
        return ans;
    }
};