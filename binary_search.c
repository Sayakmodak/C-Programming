#include<stdio.h>
int binarysearch(int arr[],int size, int element){
    int st=0 ;
    int end= size-1 ;
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
    return -1 ;
}
int main(){
    int arr[]={0,1,2,3,4,5,6,7,8,9} ;
    int size = sizeof(arr)/sizeof(int) ;
    int element = 9 ;
    int searchindex=binarysearch(arr,size,element) ;
    printf("%d was found at index number %d ",element,searchindex) ;
    return 0 ;
}