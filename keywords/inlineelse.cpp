#include<iostream>
using namespace std;
inline int getmax(int &a,int &b){
    int k;
    if(a>b){
        k=a;
    }
    else if(b>a){
        k=b;
    }
    return k;
    //this function could should not be more than 3 lines 
    //even code exceeds the line limit it still runs 
    //but it wont be stored as inline function for the compiler
}
int main(){
    int x=5,y=6;
    int ans;
    ans=getmax(x,y);
    cout<<ans<<endl;
    return 0;
}