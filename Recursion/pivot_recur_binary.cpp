#include<iostream>
using namespace std;
int pivot(int nums[],int start,int end){
    if(start>=end){return start;}
int mid=start+(end-start)/2;
if(nums[mid]<nums[0]){
    if(mid>0 &&nums[mid]<nums[mid-1]){
        return mid;
    }
    end=mid;
}
else{
    start=mid+1;
}
return pivot( nums, start, end);
}
int main(){
    int array[]={3,4,5,6,1,2};
    int start=0;int end=5;
    int k=pivot(array,start,end);
    cout<<array[k]<<endl;
    return 0;
}