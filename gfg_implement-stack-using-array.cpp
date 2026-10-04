class myStack {
  public:
     int *arr;
        int top;
        int size;
    myStack(int n) {
        arr=new int[n];
        top=-1;
        size=n;
    }

    bool isEmpty() {
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }

    bool isFull() {
        if(top==size-1){
            return true;
        }
        else{
            return false;
        }
    }

    void push(int x) {
        if(top>=size-1){
            return;
        }
        top++;
        arr[top]=x;
    }

    void pop() {
       if(top==-1){
           return ;
       }
       else{
           top--;
       }
    }

    int peek() {
        if(top==-1){
            return -1;
        }
        else{
            return arr[top];
        }
    }
};