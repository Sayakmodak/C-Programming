#include<stdio.h>
int binarysearch(int arr[],int n ,int element){
    int st=0 ;
    int end= n-1 ;
    while(st<=end){
        int mid=(st+end)/2 ;
        if(arr[mid]==element){
            return mid ;
        }
        else if(arr[mid]<element){
            st=mid+1 ;
        }
        else{
            end=mid-1 ;
        }
    }
    return-1 ;
}
int main(){
    int arr[]={2,3,4,5,6,7,8} ;
    int n = sizeof(arr)/sizeof(int) ;
    int element=3 ;
    int searchindex=binarysearch(arr,n,element) ;
    printf("%d is in the index number %d ",element,searchindex) ;
    return 0 ;
}