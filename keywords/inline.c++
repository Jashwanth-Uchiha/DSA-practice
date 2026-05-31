#include<iostream>
using namespace std;
inline int getmax(int &a,int &b){
    return (a>b)? a:b;
    //this function could should not be more than 3 lines 
}
int main(){
    int x=7,y=6;
    int ans;
    ans=getmax(x,y);
    cout<<ans<<endl;
    return 0;
}
