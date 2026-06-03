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
int search (int nums[],int start,int end,int target){
    if(start>end){
        return -1;
    }
    int k= pivot( nums, start, end);
    if(target>=nums[0]){
        end=k-1;
    }
    else{
        start=k;
    }
    int mid=start+(end-start)/2;
   
    if(target>nums[mid]){
        return search(nums,mid+1,end,target);
    }
    else if(target<nums[mid]){
         return search(nums,start,mid-1,target);
    }
    else {
        return mid;
    }
    }
    int main(){
        int nums[]={4,5,6,7,8,1,2,3};
        int start=0;int target=3;int end=7;
        int m=search(nums,start,end,target);
        cout<<m<<endl;
        return 0;
    }
