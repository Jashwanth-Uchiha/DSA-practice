#include <iostream>
using namespace std;
void merge(int *arr,int start,int end){
    int mid=start+(end-start)/2;
    int length1=mid-start+1;
    int length2=end-mid; int mainarr=start;
    int *first=new int[length1];
    int *next=new int[length2];
    for(int i=0;i<length1;i++){
        first[i]=arr[mainarr++];
    }
    mainarr=mid+1;
    for(int i=0;i<length2;i++){
        next[i]=arr[mainarr++];
    }
    int index1=0;
    int index2=0;
    mainarr=start;
  while(index1 < length1 && index2 < length2){
    if(first[index1] < next[index2])
        arr[mainarr++] = first[index1++];
    else
        arr[mainarr++] = next[index2++];
}
while(index1 < length1) arr[mainarr++] = first[index1++];
while(index2 < length2) arr[mainarr++] = next[index2++];
}
void qsort(int *arr,int start,int end){int mid=start+(end-start)/2;
    if(start>=end){
        return ;
    }
    qsort(arr,start,mid);
    qsort(arr,mid+1,end);
    merge( arr,start,end);
}

int main(){
    int array[]={1,3,56,7,8,94,67};
    qsort(array,0,6);
    for(int i=0;i<7;i++){
        cout<<array[i]<<endl;
    }
    return 0;
}