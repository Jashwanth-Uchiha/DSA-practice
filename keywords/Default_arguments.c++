#include <iostream>
using namespace std;
void print(int arr[],int n ,int start=0){
    for(int i=start;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int array[]={1,2,3,4,5,6,7};
    int size=7;
    print(array,size);
    // here we did not give start value but still it takes it by default as
    //we stored it in function
    //to store default value it must be in the right most region 
    //else all the right variable are pre defined defaults

    return 0;
}